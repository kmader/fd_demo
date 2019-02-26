# fd_demo [![Build Status](https://travis-ci.org/kmader/fd_demo.svg?branch=master)](https://travis-ci.org/kmader/fd_demo)

A demo using the frugally-deep library (Keras in C++) with Hunter package management

## Cloning Repo
```bash
git clone --recursive https://github.com/kmader/fd_demo
```

## Generating Model as JSON

```bash
python scripts/vgg16_model.py
```

## Compile the code

```bash
cd build/
rm -rf *; cmake ..; make
```

## Run
```bash
$ ./main
```

```bash
Loading model
Loading json ... done. elapsed time: 0.862343 s
Running test 1 of 1 ... done. elapsed time: 6.398503 s
Loading, constructing, testing of ../vgg.json took 9.705420 s overall.
Speed: 6.59229
Running all zeros:
[[[[0.0003]], [[0.0006]], [[0.0001]], [[0.0001]], [[0.0012]], [[0.0003]],...
```


## Building your own project

- Copy the cmake starting files to a new repo

## Adding submodule

```bash
cd lib
git submodule add https://github.com/Dobiasd/frugally-deep
```
