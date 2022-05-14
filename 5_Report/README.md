## Introduction
The first windshield wipers were operated manually by moving a lever inside the car. Later wiper designs were powered by the engine's manifold vacuum. Virtually all wipers today employ an electric motor coupled with a linkage mechanism and are actuated by a knob beside the steering wheel.


## Working
-When the button is pressed ONCE, the car will be on ACC mode.
-When the button is pressed TWICE, the car will be on Ignition mode.
-When the button is pressed THREE times, wiper turn on.
-When the button is pressed FOUR times, wiper turn off.



#### TEST PLAN:
### High Level Test plan:
| ID    | Description                             | Expected O/P | Actual O/P | 
|-------|-----------------------------------------| ------------ | ---------- | 
| H_01  |AC is  ON or OFF             |PASSED        |SUCCESS     | 
| H_01  |Wiper turned ON                     |PASSED        |SUCCESS     |
| H_03  |Wiper turned OFF             |PASSED        |SUCCESS     | 


### Low Level Test Plan:
| ID    | Description           | Expected O/P | Actual O/P | 
|-------|-----------------------| ------------ | -----------|
| L_01  |Button pressed ONCE for five seconds - ON LED RED          | PASSED       |SUCESS      |
| L_02  |Button pressed once again times - OFF LED RED | PASSED       |SUCESS      | Scenario     |
| L_03  |Button pressed again for two seconds - OFF ORANGE,GREEN,BLUE  | PASSED       |SUCCESS     | 



####  ACTIVITY:

## RAIN DETECTION CIRCUIT:

![Screenshot (20)](https://user-images.githubusercontent.com/79862567/168079223-6f4cd46f-aa23-4be9-9b60-8ce89486c124.png)


## PARAMETER CIRCUIT DESIGN:

![Screenshot (19)](https://user-images.githubusercontent.com/79862567/168079426-34b05262-08b4-49ef-a57e-9ada2944171f.png)



## ON state:

![on](https://user-images.githubusercontent.com/79862567/168426970-d1b11be8-00e3-408f-9758-e5d4cea7373a.jpeg)


## OFF state:

![off (2)](https://user-images.githubusercontent.com/79862567/168426993-25e960e1-c7f5-49fb-b8fe-71a7b193d020.jpeg)
