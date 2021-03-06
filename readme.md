# striae layout & project build
a full-size plus ortholinear keyboard project designed for myself

### stria `(noun) \ 'strī-ə \`
_plural_ `striae \ 'strī-,ē \` \
: a stripe or line distinguished from the surrounding area by color, texture, or elevation

## Contributors
[PandLantis](https://github.com/PandLantis) \
[Nabber](https://github.com/DKH707)

## Background & Process

This project started just because I wanted a keyboard that suited me. I have always been confused by the offset on modern keyboards and confounded at its persistence after learning why it was done. Additionally, as I used traditional fullsize keyboards I was bothered by how far I had to move my right hand to go between the mouse and the home row. Further frustrations arose from wanting to use the numpad and the mouse at the same time. I downsized to a TKL keyboard and that ameliorated the distance problem somewhat, but added a new problem of wanting a numpad and not having one. I made an autohotkey script to be able to toggle my number row to send numpad inputs, but it is not the same.

**…so, I knew I wanted**:
- a numpad, but not on the right
	- Might as well move the nav cluster (arrows, page up, page down, home, end, insert, delete) while I am at it.
	- This also mirrors the convention of having directional input (d-pad) under the left hand from all video game controllers I am aware of.
- ortholinear because _logic_
	- Ortholinear layouts are generally praised by those that switch to them (sample bias) and I like the look of them more.
- probably not qwerty because _also logic_
	- The qwerty layout worked for its intended purpose, but may not be best suited to my use, or modern keyboard inputs generally. With functionally no downside to testing a different layout other than the time spent, why not explore different options?

I started to look around for something that suited me but I ended up coming up short[^1]. The mechanical keyboard community is vast, varied, and beautiful; but most members are into smaller boards and by far the most common differentiators on keyboards are switches and keycaps. Which is great! I love a pretty board, but I also need something functional for me. That is how I define beauty.

I started building a layout for myself on [keyboard-layout-editor](http://www.keyboard-layout-editor.com). While I was building, I started looking into arrangements other than qwerty, as well. After going through plenty of revisions I started researching how I was going to be able to make the functionality I wanted possible. That is how I found [quantum mechanical keyboard](https://github.com/qmk/qmk_firmware) firmware, or QMK. QMK seemed like it could do what I wanted and I just had to learn how to use it. At this point I began to give serious consideration to the actual production of the physical keyboard. I started looking for and testing out switches, picking materials. I needed to make some decisions about the case and I did not like having a simple sandwich board, with or without the middle layers. Since everything else is from scratch I might as well learn a cad software and design my own case, so I did. During the process of doing all the design work my brother, an electrical engineer, offered to make a pcb design so he could practice. Seemed interesting to me so I took him up on it.

After completing the designs and selecting the switches and keycaps, I went about having the PCB made and purchased the components.

**suppliers I used and would recommend**:
- [digikey]\: electrical and machine parts (bom available in folders)
- [jlcpcb]\: pcb manufacture
- [bert rabbe]\: local woodworker to make the case frame
- [laserboost]\: plates
- [zealpc]\: zilent v2 62g for the office keyboard
- [ringerkeys]\: boba u4 silent 62g for the home keyboard (i am making two)
- [divinikey]\: np pbt milkwhite blanks (home) and millmax hotswap sockets
- [kbdfans]\: dsa blanks kit 17 (work)
- [weact studio]\: weact blackpill v3 stm32f411ceu6
	- find links to their official store on the product page
- [keygem]\: switch sampler
- [signature plastics]\: dsa 2u pos keycaps

_I think that is all of them. If I remember or add any more I will be sure to list them here_

## technical stuff
_this is ugly and a brain dump. will be cleaned up, maybe._ \
qmk firmware, ~~vial integration~~ qmk-xap is end goal for keyboard management through software. Initial firmware will not have any via(l) integration, but may use vial if xap does not get to workable state soon enough. \
119 keys, full size keyboard plus. split out some 2u keys on the numpad, split spacebar, added two columns between the hands. see ideal keyboard layout file for kle data. \
matrix is 12rows × 10 columns. the nav cluster is a single column in the matrix, every other matrix column is made from two adjacent physical columns. \
2 is31fl3733 led drivers control per-key rgb leds. \
all components are surface mount, except the mcu which is intentionally distinct from the matrix pcb for modularity. \

**VendorID: 0x0010** - Why did I choose this? This is not otherwise registered (according to [device hunt](https://devicehunt.com)) but cannot remember the reason I selected this id to occupy. Probably because if taken as digit pairs it is "0 2" in base10, which is a pun on the name of the "company" (nihilad) that I use to make things in my head canon. \
**ProductID: 0x0110** - I chose this because the double 1s look like lines which is the name of the board. \


[^1]: There are definitely options out there that do some of things I want (e.g. [southpaw-keyboard](https://ludovic.chabant.com/devblog/2018/07/24/southpaw-keyboard/)).

[digikey]:https://www.digikey.com
[jlcpcb]:https://jlcpcb.com
[bert rabbe]:http://beraht.com/index.html
[laserboost]:https://www.laserboost.com
[zealpc]:https://zealpc.net
[ringerkeys]:https://ringerkeys.com
[divinikey]:https://divinikey.com
[kbdfans]:https://kbdfans.com
[weact studio]:https://github.com/WeActTC/MiniSTM32F4x1
[keygem]:https://keygem.store
[signature plastics]:https://pimpmykeyboard.com
