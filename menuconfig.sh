#!/bin/bash
export ARCH=arm64
make O=out chopin_maribel_defconfig
make O=out menuconfig
echo "Press any key to save"
read
make O=out savedefconfig
mv out/defconfig arch/${ARCH}/configs/chopin_maribel_defconfig
