# DZ65 v3

## install 
sudo port install avrdude  dfu-programmer avr-gcc   dos2unix 
uv tool install --with pip qmk    
  sudo port install avr-gcc avr-libc

## flash 
qmk flash -kb dztech/dz65rgb/v3 -km rmukhamet

## history

firmware size:

- 28.06.2022 init - 16776/28672
- 28.06.2022 enabled Leader - 16830/28672
- 29.06.2022 enable rgb - 27608/28672
- 30.06.2022 exclude rgb animations - 21192/28672
- 04.07.2022 enable leader - 21642/28672
- 12.07.2022 enable key override - 23208/2867u
