



mount  media/card/qt_lib.img  /home/ficekaer/zynq/qt/install/lib
mount  media/card/opencv_lib.img  /usr/lib

rm -rf media/EXT4/mnt/zedboard_lab1

cp home/ficekaer/copytozed/zedboard_lab1     media/EXT4/mnt

mount  mnt/qt_lib.img  /home/ficekaer/zynq/qt/install/lib
mount  mnt/opencv_lib.img  /usr/lib

cd /

cd home

mkdir ficekaer

cd ficekaer

mkdir zynq

cd zynq

mkdir qt

cd qt

mkdir install

cd install

mkdir lib

cd /

mount  media/card/qt_lib.img  /home/ficekaer/zynq/qt/install/lib

mount  media/card/opencv_lib.img  /usr/lib

cd media/card



