export CLANG_PATH=~/general-clang
export PATH=${CLANG_PATH}/bin:${PATH}
export ARCH=arm64
export SUBARCH=arm64
export OUTPUT=out
make CC=$CLANG_PATH/bin/clang CLANG_TRIPLE=$CLANG_PATH/bin/aarch64-linux-gnu- CROSS_COMPILE=$CLANG_PATH/bin/aarch64-linux-gnu- O=$OUTPUT mrproper
make CC=$CLANG_PATH/bin/clang CLANG_TRIPLE=$CLANG_PATH/bin/aarch64-linux-gnu- CROSS_COMPILE=$CLANG_PATH/bin/aarch64-linux-gnu- O=$OUTPUT chopin_maribel_defconfig
make CC=$CLANG_PATH/bin/clang CLANG_TRIPLE=$CLANG_PATH/bin/aarch64-linux-gnu- CROSS_COMPILE=$CLANG_PATH/bin/aarch64-linux-gnu- O=$OUTPUT -j16
