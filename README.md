## About Eigen-Quick-Start
This repository contains the few source files necessary to compile a C++ project that depends on the [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page) library. We will use the Conan package manager to accomplish this.

## Instructions
First you must set up a Conan profile for your hardware. If you want Conan to figure this out for you (easiest), simply run
```
conan profile detect --force
```
Now we are ready to start using Conan.

1.  From the repository, run
```
conan install . --build=missing
```
This checks for binaries on your system and in the Conan remote that match your profile - if these are not found (`missing`), then the packages will be built from source This should automatically output binary files to a new `build/Release` folder. The output directory and build type can both be specified manually.

2.  Next, to set up the project (cmake version >= 3.23), run 
```
cmake --preset conan-release
```
This builds the directory structure, and so long as the Conan settings do not change, does not need to be rerun each time you would like to recompile. The build instructions are output to the `./build/Release` folder.

3. To finally build the executable on MacOS or Linux, run
```
cmake --build ./build/Release
```
and on Windows (MSVC, Visual Studio) specify the configuration at run time
```
cmake --build ./build/Release --config Debug
```
The executable is now in the `./build/Release` directory!
