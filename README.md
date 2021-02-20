# Welcome to kernel readme

I have defined few commands here which allows you to build and run the kernel.

> This Readme assumes that you have installed Docker and QEMU on your PC

## Build the docker image

> This docker image contains all the tools needed to build the kernel

Use the following command to build the docker image for the container.

```
docker build buildenv -t <a-name-for-the-image>
```

## Run the build environment

To run the docker container use the following command.

```
docker run --rm -it -v %cd%:/root/env <tag-used-during-docker-build>
```

## Build command

To build the ISO from source use the command inside the docker container shell.

```
make build-x86_64
```

Once done exit docker using this command.

```
exit
```

## Run the ISO in QEMU

To start the ISO in QEMU run the command from the project root in windows powershell.

```
qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"
```
