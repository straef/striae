# striae layout & project build
a full-size plus ortholinear keyboard project designed for myself

### stria (noun): \ 'strī-ə \
	_plural_ striae \ 'strī-,ē \
	: a stripe or line distinguished from the surrounding area by color, texture, or elevation

this project started just because i wanted a keyboard that suited me. i have always been confused by the offset on modern keyboards and confounded at its persistence after learning why it was done. additionally as i used traditional fullsize keyboards i was bothered by how far i had to move my right hand to go between the mouse and the home row. further frustrations arose from wanting to use the numpad and the mouse at the same time. i downsized to a tenkeyless keyboard and that ameliorated the distance problem somewhat, but added a new problem of wanting a numpad and not having one. i made an autohotkey script to be able to toggle my number row to send numpad inputs, but it is not the same.

**all this means i knew i wanted**:
- a numpad, but not on the right
	- might as well move the nav cluster (arrows, page up, page down, home, end, insert, delete) while i am at it
- ortholinear because _logic_
	- probably not qwerty because _also logic_

looking around for something that suited me had me coming up short. the mechanical keyboard community is vast, varied, and beautiful; but most members are into smaller boards. and by far the most common differentiators on keyboards are switches and keycaps. which is great! i love a pretty board, but i also need something functional for me. that is how i define beauty.

i started building a layout for myself on [keyboard-layout-editor](http://www.keyboard-layout-editor.com). while i was building that i started looking into arrangements other than qwerty, as well. after going through plenty of revisions i started researching how i was going to be able to do all this. that is how i found [quantum mechanical keyboard](https://github.com/qmk/qmk_firmware) firmware, or qmk for short. qmk seemed like it could do what i wanted, i just had to learn how to use it. at this point i began to give serious consideration to the actual production of the physical keyboard. i started looking for and testing out switches, picking materials. i needed to make some decisions about the case and i did not like having a simple sandwich board, with or without the middle layers. since everything else is from scratch i might as well learn a cad software and design my own case, so i did. during the process of doing all the design work, my brother who is an electrical engineer offered to make a pcb design so he could practice. seemed interesting to me so i took him up on it.

after completing the designs and selecting the switches and keycaps, i went about having things made and purchasing components.

**suppliers i used and would recommend**:
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

_i think that is all of them. if i remember or add any more i will be sure to list them here_

## technical stuff
this is ugly and a brain dump. will be cleaned up, maybe.
qmk firmware, vial integration
119 keys, full size keyboard plus. split out some 2u keys on the numpad, split spacebar, added two columns between the hands. see ideal keyboard layout file for kle data.
matrix is 12rows × 10 columns. the nav cluster is a single column in the matrix, every other matrix column is made from two adjacent physical columns.
2 is31fl3733 led drivers control per-key rgb leds.
all components are surface mount, except the mcu which is intentionally distinct from the matrix pcb for modularity.
