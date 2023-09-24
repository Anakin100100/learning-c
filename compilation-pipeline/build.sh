#!/bin/bash

gcc -c avg.c
gcc -c main.c
gcc avg.o main.o -o main.out
./main.out 
