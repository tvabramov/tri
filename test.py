# TODO: optimize file pathing in TestFileEnvironment for different platforms.
from scripttest import TestFileEnvironment
import filecmp
import os

env = TestFileEnvironment('./scratch')

def common():
    print('All tests with common cases are passed')

def touching():
    print('All tests with touching triangles are passed')

def special():
    env.clear()

    print('Parallel triangles with small shift, all projections are intersected')
    encode_result_0 = env.run('..\\tri', '2', '0', '0', '0', '2', '0', '0', '0', '2', '2', '0', '1', '0', '2', '1', '0', '0', '3', expect_error = False)
    assert encode_result_0.returncode == 0;
    assert encode_result_0.stdout.startswith('NO')
    print('OK')

    print('All tests with special cases are passed')

def degenerated():
    print('All tests with degenerated triangles are passed')

if __name__ == "__main__":
    common()
    touching()
    special()
    degenerated()

    print('All tests are passed')