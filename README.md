![](./resources/official_armmbed_example_badge.png)
# mbed-os-push-to-light-thread


You can build this project with all supported [Mbed OS build tools](https://os.mbed.com/docs/mbed-os/latest/tools/index.html). However, this example project specifically refers to the command-line interface tool [Arm Mbed CLI](https://github.com/ARMmbed/mbed-cli#installing-mbed-cli):

1. Install [Git-Bash](https://git-scm.com/downloads)
1. Install [Python 2.7](https://www.python.org/download/releases/2.7/)
1. Install [GCC-arm-non-eabi](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
1. Install [Mbed CLI](https://os.mbed.com/docs/mbed-os/v5.15/tools/developing-mbed-cli.html), you can install and config with python 2.7 by using command line in Git-Bash:$ C:/Python27/Scripts/pip install mbed-cli
1. Clone this project by using command line:$ mbed import https://github.com/sadanalog/ict710-feb-24-assignment/tree/push-to-light-thread
1. Go to the folder project $cd push-to-light-thread
1. Config GCC-arm-path:$ mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\9 2019-q4-major\bin"
1. To compile the code: $ mbed compile -m DISCO_L475VG_IOT01A -t GCC_ARM
1. To download code to development board: $ mbed compile -m DISCO_L475VG_IOT01A -t GCC_ARM --flash





