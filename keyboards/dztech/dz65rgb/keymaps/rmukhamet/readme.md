# DZ65RGB v3

```
    Keymap Default Layer
       ,-----------------------------------------------------------------------------.
       |~ ` |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |Backsp |Home|
       |-----------------------------------------------------------------------------|
       |Tab    |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] | \  |Del |
       |-----------------------------------------------------------------------------|
       |Ctrl Esc|  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |Return  |PgUp|
       |-----------------------------------------------------------------------------|
       |Shift    |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / |Shift  | Up |PgDn|
       |-----------------------------------------------------------------------------|
       |Ctrl |Alt  |Win  |           Space            |Alt | FN |Ctrl |Lef |Dow |Rig |
       `-----------------------------------------------------------------------------'
```

```
    Keymap Function Layer
       ,-----------------------------------------------------------------------------.
       |Esc  | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 |F10 |F11 |F12 |DEL   |PNTS|
       |-----------------------------------------------------------------------------|
       |       |RgbT|RgbM|Hue+|Hue-|Sat+|Sat-|BR+ |BR- |    |    |SLCK|Paus|RST |    |
       |-----------------------------------------------------------------------------|
       |        |Eff+|Eff-|    |    |    |    |    |    |    |    |    |EEP RST |    |
       |-----------------------------------------------------------------------------|
       |Shift    |    |    |    |    |    |NK T|Mute|Vol-|Vol+|    |       |PgUp|    |
       |-----------------------------------------------------------------------------|
       |     |     |     |           Play             |    |    |     |Home|PgDn|End |
       `-----------------------------------------------------------------------------'
```

### Build layout

```
    python3 -m ensurepip 
    python3 -m pip install qmk 
    git clone git@github.com:rmukhamet/qmk_firmware.git      
    cd qmk_firmware 
    qmk setup   
    qmk config user.keymap=rmukhamet  user.keyboard=dztech/dz65rgb/v3
    qmk compile

```
#### build to flash with isp
with bootloader
``` 
make dztech/dz65rgb/v3:rmukhamet:production   
```



# guades 
new flash 
https://docs.google.com/document/d/1XjUHycMxzGOkYcV6PA7MNnabM38MM2uzsL4wglNATQw/edit#heading=h.k9asa2gc7xot

ogininal 
https://docs.google.com/document/d/1B3y8U0wn-zLecDph4QvYtxYSmy3n23creO9Vme2w61g/edit#
hex or bin
https://docs.google.com/document/d/1TPTPQbGgHDkwnE-awTKdbrCHVg7UklC2uYy5JpFZVNM/edit


https://github.com/moyi4681/firmware




# helpful to cfg

https://thomasbaart.nl/2018/12/20/qmk-basics-leader-key/
https://thomasbaart.nl/2018/12/13/qmk-basics-tap-dance/
https://thomasbaart.nl/2018/12/09/qmk-basics-tap-and-hold-actions/
https://thomasbaart.nl/2018/12/06/qmk-basics-how-to-add-a-layer-to-your-keymap/