cmake -S "src" -B "build/debug" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake -S "src" -B "build/release" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
pause