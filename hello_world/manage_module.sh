#!/bin/bash

case "$1" in
  load)
    sudo insmod hello_world.ko
    dmesg | tail
    ;;
  unload)
    sudo rmmod hello_world
    dmesg | tail
    ;;
  *)
    echo "Usage: $0 {load|unload}"
    exit 1
    ;;
esac
