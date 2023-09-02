# gtk-boilerplate
C++ Template for GTK App

# Run app

## make sure g++ and GTK are installed

`sudo apt update && sudo apt install build-essential`

`sudo apt install libgtkmm-4.0-dev`

## _To Avoid Issues Add Following Flags To Make Sure App Runs

`g++ main.cpp `pkg-config --cflags --libs gtkmm-4.0` -std=c++17`
