#!/bin/bash

FILES=$(ls | grep ".c")

gcc $FILES -o set_1.out
