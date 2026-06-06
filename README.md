# ATtiny412_Devboard
<img width="1134" height="788" alt="Screenshot 2026-06-04 192047" src="https://github.com/user-attachments/assets/252afbea-17c4-4183-b926-112f82b2d112" />

Uses an ATtiny 412 or the 212 as the MCU for a very cheap and small dev-board. Developed alongside the USB serial to UDPI Programmer.

## SPECS:
The devboard works with both an ATtiny 412 and an ATtiny 212 in the SOT 8 form-factor. These MCU's have a total of 8 pins. Here are the pinouts for each pin (will be replaced with devboard pinout later):
<img width="855" height="244" alt="image" src="https://github.com/user-attachments/assets/412e6d50-e9a5-43db-a619-f4b9be2d4fca" />
### ATtiny412 (Recomended Option):
#### Flash: 4 KB
#### SRAM: 256 B
#### EEPROM: 128 B
### ATtiny212: 
#### Flash: 2 KB
#### SRAM: 128 B
#### EEPROM: 64 B

## HOW TO USE:
1. Install or Open Arduino
2. Go to File < Preferences < Additional Boards Manager URLs and paste in "http://drazzy.com/package_drazzy.com_index.json"
3. Go to Tools < Board: and select "ATtiny412/402/212/202"
4. Go to Tools < Clock: and select "20 MHz Internal"
6. Search up and install CH340N Drivers
7. Connect Programmer 3 pins to Devboard 3 pins
<img width="1204" height="625" alt="Screenshot 2026-06-06 000558" src="https://github.com/user-attachments/assets/6f758a27-758b-43f2-b706-88001ba969ab" />
<img width="1134" height="788" alt="Screenshot 2026-06-04 192047 2" src="https://github.com/user-attachments/assets/3f3861c7-06ed-47f9-a6e8-3276a10ff679" />
8. Flash LED Blink Code
9. It Should Work:)

## PCB:
I made two layer PCBs for each of the two boards. I added ground pours and thicker power traces for hgiher relizablity and more compact size. The devboard user breakouts are breadboard sized and spaced. 
All components are designed to be hand solderable. Note: UPDI pin is not broken out on devboard (SO DNC) to the other user pins as it needs to be kept clear for programming. 
### Devboard Schematic:
<img width="775" height="757" alt="Screenshot 2026-06-04 162510" src="https://github.com/user-attachments/assets/09dcbfde-1d2e-4c98-898d-320b2cd44b03" />
### Programmer Schematic:
<img width="576" height="379" alt="Screenshot 2026-06-05 154249" src="https://github.com/user-attachments/assets/da408624-c05f-4533-a038-7760f3933117" />
### Devboard PCB:
<img width="530" height="719" alt="Screenshot 2026-06-04 180715" src="https://github.com/user-attachments/assets/c15f35b8-841b-454a-8848-9fbdad8bd01e" />
### Programmer PCB:
<img width="642" height="815" alt="Screenshot 2026-06-05 201658" src="https://github.com/user-attachments/assets/8a407a3b-f062-40b8-8f62-fd6df1fddcf7" />

### BOM:

