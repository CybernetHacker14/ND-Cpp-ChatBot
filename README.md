# ND-Cpp-ChatBot
A ChatBot application which uses wxWdigets and C++

NOTE:- README under construction

ChatBot Udacity project for Windows OS. CMake, Visual Studio 2019 and Powershell should be installed on the system.

Instructions:
- Clone this project using `git clone https://github.com/CybernetHacker14/ND-Cpp-ChatBot`
- Download the [wxWidgets Header Files](https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxWidgets-3.1.4-headers.7z)
- Download the [wxWidgets Windows Development Binaries](https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxMSW-3.1.4_vc14x_x64_Dev.7z)
- Extract the files from both the downloaded archives in `thirdparty/wxwidgets` folder.
- Inside the cloned repo folder, make a folder named `_solutiondir` which exists at the directory level of the `CMakeLists.txt` file.
- Open a Powershell window inside the `_solutiondir` folder and execute the command `cmake ..` which will generate Visual Studio project and solution files.
- On running the application inside Visual Studio, the application will crash, hence to make it work, copy the `.dll` files inside the `bin` folder to the output directory - where the `.exe` file exists.