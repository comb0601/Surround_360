<div align="center">

# 🌐 Surround360

### *Next-Generation 360° Stereo Video Capture & Rendering System*

[![License](https://img.shields.io/badge/License-Custom-blue.svg)](LICENSE.md)
[![VR Ready](https://img.shields.io/badge/VR-Ready-green.svg)]()
[![3D Stereo](https://img.shields.io/badge/3D-Stereo-purple.svg)]()
[![Open Source](https://img.shields.io/badge/Open-Source-orange.svg)]()

---

**Surround360** is a complete hardware and software ecosystem for capturing and rendering immersive 3D (stereo) 360° videos and photos, optimized for virtual reality experiences.

[📖 Manual](#-instruction-manual) • [💾 Sample Data](#-sample-data) • [🤝 Community](#-join-the-surround360-community) • [⚖️ License](#-license)

---

</div>

## 📋 Table of Contents

- [Overview](#-overview)
- [System Components](#-system-components)
- [Instruction Manual](#-instruction-manual)
- [Sample Data](#-sample-data)
- [Getting Started](#-getting-started)
- [Join the Community](#-join-the-surround360-community)
- [License](#-license)

---

## 🎯 Overview

Surround360 revolutionizes immersive content creation by providing a complete, open-source solution for:

✨ **High-Quality Capture** - Professional-grade 360° video recording
🎬 **Stereo 3D Output** - True depth perception for VR headsets
🔧 **Full Control** - Custom hardware designs and software stack
🚀 **VR-Optimized** - Renders content ready for immediate VR playback

---

## 🗂️ System Components

The Surround360 system is organized into three main components:

### 📐 `/surround360_design`
> **Hardware Designs & Assembly**
> Complete CAD files, assembly instructions, and manufacturing specifications for building your own Surround360 camera rig.

### 🎮 `/surround360_camera_ctl_ui`
> **Camera Control Application**
> Linux desktop application providing full control over the camera system to capture raw stereo 360° data.

### 🎨 `/surround360_render`
> **Rendering Pipeline**
> Advanced rendering software that processes raw camera data into polished, VR-ready video files with proper stereo stitching.

---

## 📖 Instruction Manual

For comprehensive guidance on building, configuring, and operating the Surround360 system, please refer to our complete instruction manual:

📄 **[Surround360 Complete Manual (PDF)](https://github.com/facebook/Surround360/blob/master/surround360_design/assembly_guide/Surround360_Manual.pdf)**

*Covers everything from hardware assembly to software operation*

---

## 💾 Sample Data

Test the rendering pipeline without building hardware! We provide sample datasets to help you get started:

### 🏛️ Palace of Fine Arts - Quick Test Dataset
**2 Frames | 337.4 MB**

Perfect for initial testing and learning the workflow.

- 📥 **[Download Raw Data](http://surround360.hacktv.xyz/sample/sample_dataset.zip)**
- 🎥 **[Download Sample Result](https://s3-us-west-2.amazonaws.com/surround360/sample/sample_result.zip)**

> **Note:** This dataset has already been unpacked and arranged, so you can skip directly to the rendering steps.

### 🏢 Facebook Building 20 - Full Dataset
**190 Frames | 21.15 GB**

Complete dataset for thorough testing and production workflows.

- 📥 **[Binary File 1](https://s3-us-west-2.amazonaws.com/surround360/github_samples/test/0.bin)** (10.76 GB)
- 📥 **[Binary File 2](https://s3-us-west-2.amazonaws.com/surround360/github_samples/test/1.bin)** (9.56 GB)
- 🎥 **[Sample Result](https://s3-us-west-2.amazonaws.com/surround360/github_samples/test/render.zip)** (823.6 MB - includes calibrated configs and 2 rendered frames)

> **Note:** See `NOTES.txt` in the dataset for sample processing commands.

---

## 🚀 Getting Started

1. **Choose Your Path:**
   - 🔨 Build the hardware using `/surround360_design` specifications
   - 💻 Or start with sample data to test the rendering pipeline

2. **Capture Content:**
   - Use the camera control UI to record raw 360° footage
   - Configure capture settings for your scene

3. **Render to VR:**
   - Process raw data through the rendering pipeline
   - Output VR-ready stereo 360° video files

4. **Experience in VR:**
   - View your content in any VR headset
   - Share immersive experiences with the world

---

## 🤝 Join the Surround360 Community

We welcome contributions from developers, VR enthusiasts, and makers!

- 📝 Check out the **`CONTRIBUTING.md`** file in each subdirectory
- 🐛 Report issues and suggest improvements
- 🔧 Submit pull requests to enhance the system
- 💬 Share your Surround360 projects and experiences

See our **[Code of Conduct](CODE_OF_CONDUCT.md)** for community guidelines.

---

## ⚖️ License

The Surround360 system uses different licenses for different components:

- **Hardware Designs** - See `/surround360_design/LICENSE`
- **Camera Control Software** - See `/surround360_camera_ctl_ui/LICENSE`
- **Rendering Software** - See `/surround360_render/LICENSE`

📜 **[View Main License](LICENSE.md)** | Additional patent grant included

---

<div align="center">

### 🌟 Built with passion for immersive storytelling

**Made possible by the open-source community**

</div>
