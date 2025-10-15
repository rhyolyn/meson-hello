# 🚀 How to Build and Debug (For Non-Developers)

## SIMPLE 2-STEP PROCESS

### Step 1: BUILD (with visible output)
1. **Press Ctrl+Shift+`** (opens terminal at bottom of VS Code)
2. **Type**: `python scripts/meson/build.py --clean`
3. **Press Enter**
4. **WATCH the output** - it stays visible and tells you if build succeeded

### Step 2: DEBUG
1. **Press F5** (starts debugger)
2. Your program runs and you can set breakpoints

**That's it! Build in terminal (see output), then F5 to debug.**

---

## Why This Works

- ✅ **Terminal shows ALL output** - never clears
- ✅ **Cross-platform** - works on Windows, Mac, Linux  
- ✅ **No scripts** - just standard VS Code + Python
- ✅ **Reliable** - no complex automation to break

---

## Troubleshooting

### ❌ "python not found"?
- Make sure Python is installed and in your PATH

### ❌ "Program not found" when pressing F5?  
- Run the build command first (Step 1)
- Check that `install/bin/hello.exe` (Windows) or `install/bin/hello` (Linux/Mac) exists

### ❌ Build failed?
- Read the error messages in the terminal
- They stay visible so you can see what went wrong

---

## What the Build Command Does

`python scripts/meson/build.py --clean` runs:
1. 🧹 Cleans old build files
2. 🔧 Sets up build system
3. 🔨 Compiles all code
4. ✅ Runs tests
5. 📦 Installs to `install/bin/`

All output stays visible in the terminal so you can see progress and any errors.

---

## File Locations

- **Your main code**: `apps/hello/hello.cpp`
- **Libraries**: `libs/` folder
- **Built program**: `install/bin/hello.exe` (Windows) or `install/bin/hello` (Linux/Mac)
- **Don't touch**: `.vscode/` folder

**Remember: Ctrl+Shift+` → build command → F5 🎯**