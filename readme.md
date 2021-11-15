# striae layout & project build
a full-size plus ortholinear keyboard project designed for myself

### stria (noun): \ 'strī-ə \
	_plural_ striae \ 'strī-,ē \
	: a stripe or line distinguished from the surrounding area by color, texture, or elevation

This project started just because I wanted a keyboard that suited me. I have always been confused by the offset on modern keyboards and confounded at its persistence after learning why it was done. Additionally, as I used traditional fullsize keyboards I was bothered by how far I had to move my right hand to go between the mouse and the home row. Further frustrations arose from wanting to use the numpad and the mouse at the same time. I downsized to a TKL keyboard and that ameliorated the distance problem somewhat, but added a new problem of wanting a numpad and not having one. I made an autohotkey script to be able to toggle my number row to send numpad inputs, but it is not the same.

**so, I knew I wanted**:
- a numpad, but not on the right
	- might as well move the nav cluster (arrows, page up, page down, home, end, insert, delete) while I am at it
- ortholinear because _logic_
	- probably not qwerty because _also logic_

I started to look around for something that suited me but I ended up coming up short. The mechanical keyboard community is vast, varied, and beautiful; but most members are into smaller boards and by far the most common differentiators on keyboards are switches and keycaps. Which is great! I love a pretty board, but I also need something functional for me. That is how I define beauty.

I started building a layout for myself on [keyboard-layout-editor](http://www.keyboard-layout-editor.com). While I was building, I started looking into arrangements other than qwerty, as well. After going through plenty of revisions I started researching how I was going to be able to make the functionality I wanted possible. That is how I found [quantum mechanical keyboard](https://github.com/qmk/qmk_firmware) firmware, or QMK. QMK seemed like it could do what I wanted and I just had to learn how to use it. At this point I began to give serious consideration to the actual production of the physical keyboard. I started looking for and testing out switches, picking materials. I needed to make some decisions about the case and I did not like having a simple sandwich board, with or without the middle layers. Since everything else is from scratch I might as well learn a cad software and design my own case, so I did. During the process of doing all the design work my brother, an electrical engineer, offered to make a pcb design so he could practice. Seemed interesting to me so I took him up on it.

After completing the designs and selecting the switches and keycaps, I went about having the PCB made and purchased the components.

**suppliers I used and would recommend**:
- [digikey](https://www.digikey.com): electrical and machine parts (bom available in folders)
- [jlcpcb](https://jlcpcb.com): pcb manufacture
- [bert rabbe](http://beraht.com/index.html): local woodworker to make the case frame
- [laserboost](https://www.laserboost.com): plates
- [zealpc](https://zealpc.net): zilent v2 62g for the office keyboard
- [ringerkeys](https://ringerkeys.com): boba u4 silent 62g for the home keyboard (i am making two)
- [divinikey](https://divinikey.com): np pbt milkwhite blanks (home) and millmax hotswap sockets
- [kbdfans](https://kbdfans.com): dsa blanks kit 17 (work)
- [weact studio](https://github.com/WeActTC/MiniSTM32F4x1): weact blackpill v3 stm32f411ceu6
	- find links to their official store on the product page
- [keygem](https://keygem.store): switch sampler
- [signature plastics](https://pimpmykeyboard.com): dsa 2u pos keycaps

_I think that is all of them. If I remember or add any more I will be sure to list them here_

## technical stuff
this is ugly and a brain dump. will be cleaned up, maybe.
qmk firmware, vial integration
119 keys, full size keyboard plus. split out some 2u keys on the numpad, split spacebar, added two columns between the hands. see ideal keyboard layout file for kle data.
matrix is 12rows × 10 columns. the nav cluster is a single column in the matrix, every other matrix column is made from two adjacent physical columns.
2 is31fl3733 led drivers control per-key rgb leds.
all components are surface mount, except the mcu which is intentionally distinct from the matrix pcb for modularity.
