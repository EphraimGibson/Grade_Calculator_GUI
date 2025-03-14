# Grade Calculator GUI

A sophisticated Windows Forms application built with C++/CLR designed to streamline the management of student grades and academic score calculations in educational environments.

## Overview
The Grade Calculator GUI provides educators with a user-friendly interface to manage, track, and calculate student grades efficiently. This tool simplifies the grading process and helps maintain accurate academic records.

## Features
- **Grade Management**: Easy input and modification of student grades
- **Score Calculation**: Automatic calculation of final grades based on various components
- **User-Friendly Interface**: Intuitive Windows Forms-based GUI
- **Data Persistence**: Save and load grade information
- **Grade Analysis**: View class statistics and individual student performance

## Project Structure
```
Grade_Calculator_GUI/
├── src/                           # Source code files
│   ├── CppCLR_WinFormsProject.cpp # Main application entry point
│   ├── Form1.cpp                  # Form implementation
│   ├── Form1.h                    # Form header with GUI components
│   ├── pch.cpp                    # Precompiled header implementation
│   └── pch.h                      # Precompiled header definitions
│
├── resources/                     # Resource files
│   ├── app.ico                    # Application icon
│   ├── app.rc                     # Resource configuration
│   ├── Resource.h                 # Resource definitions
│   └── Form1.resx                 # Windows Forms resource file
│
├── project_files/                 # Project configuration
│   ├── Grade_Calculator.sln       # Solution file
│   ├── AssemblyInfo.cpp          # Assembly metadata
│   └── *.vcxproj files           # Project configuration files
│
└── distribution/                  # Distribution packages
    ├── Setup1/                    # Setup project directory
    └── StudentGrader.msi          # Installation package
```

## Technical Information
- **Programming Language**: C++/CLR
- **Framework**: .NET Framework
- **UI Framework**: Windows Forms
- **IDE**: Microsoft Visual Studio
- **Platform**: Windows
- **Architecture**: 64-bit

## Build Instructions
1. Prerequisites:
   - Microsoft Visual Studio (2019 or later recommended)
   - .NET Framework SDK
   - C++/CLR workload installed in Visual Studio

2. Building the Project:
   - Open `project_files/Grade_Calculator.sln` in Visual Studio
   - Select the desired build configuration (Debug/Release)
   - Build the solution (F7 or Build > Build Solution)
   - Compiled output will be available in the `x64` directory

## Installation Guide
### Method 1: Using the Installer
1. Locate `distribution/StudentGrader.msi`
2. Double-click the installer
3. Follow the installation wizard instructions
4. Launch the application from the Start Menu

### Method 2: Developer Build
1. Build the project following the Build Instructions
2. Navigate to the output directory
3. Run the executable directly

## File Descriptions
### Source Files
- `CppCLR_WinFormsProject.cpp`: Contains the application entry point and initializes the Windows Forms application
- `Form1.h/cpp`: Implements the main application window and grade calculation logic
- `pch.h/cpp`: Precompiled header files for improved build performance

### Resource Files
- `app.rc`: Contains application resources like icons and version information
- `Resource.h`: Header file for resource definitions
- `Form1.resx`: Windows Forms resource file containing form layout and design

### Project Files
- `Grade_Calculator.sln`: Visual Studio solution file
- `AssemblyInfo.cpp`: Contains assembly metadata and version information
- Various .vcxproj files: Project configuration and build settings

## License
This project is licensed under the terms specified in the LICENSE file included in the repository.

## Contributing
We welcome contributions to improve the Grade Calculator GUI. Please feel free to submit issues and pull requests.

# Grade_Calculator_GUI

Simple grading app used to manage students scores in class and exams.
