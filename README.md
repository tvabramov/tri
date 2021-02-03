# tri
**tri** is a CLI utility to determine (YES/NO) whether there is an intersection between two triangles. Triangles are supposed to intersect if they have at least one common point.

## How to build it
Just clone the code and:
```sh
$ cd tri && make
```
Note: you need a c++14 compatible compiler and "make" utility.
If you want to run tests, just:
```sh
$ make test
```
But you will also need a python2 installed.

## Usage
```sh
$ ./tri <AX1> <AY1> <AZ1> <AX2> <AY2> <AZ2> <AX3> <AY3> <AZ3> <BX1> <BY1> <BZ1> <BX2> <BY2> <BZ2> <BX3> <BY3> <BZ3>
```
where `A*` are coordinates of the first triangle's points and `B*` are points of the second one.
As a result program will print to stdout "YES" if there is an intersection and `NO` otherwise.
