#### CMake + mingw64
```bash
cmake ..
make
```

#### CMake + msvc
```bash
cmake ..
cmake --build . --config Release -j 4
```

#### CMake + msvc + namke 
```bash
cmake .. -G 'NMake MakeFiles'
nmake
```
