# Tai Chi for the HoloLens 2 

This is a raw app for the HoloLens 2, I built it as a POC to learn nad teach about using the Unreal Engine, the UE MRTK from Microsoft and voice control.
Oh, and you can learn Tai Chi too.


## Usage

Except for the initial positioning, this is intended to be a completely hands-free application, so the user won't need to interrupt her/his movements and poses during the lesson.
The Tai Chi character will spawn directly in front of the user.
The user is able to reposition, scale and rotate the character freely with his hands and two-hand manipulation.

![spawn](https://github.com/Species521/HL2_UE4_TaiChi/blob/main/Content/images/app_spawn_01.JPG) 

A rectangle around the character's base indicates the boundaries in which the character wil move. The user can place the character e.g. as a miniature on a table or in full life size next to her/him.

When the character is in a convenient position, the user can control the character by the following voice commands:
- “Go” plays the animation and reawakens it when paused
- “Wait”, you guessed it, pauses the animation
- “Again” resets the animation back to the start



# Unreal Engine Blueprints

Initially the voice commands are set up in the Project Settings > Input:

![spawn](https://github.com/Species521/HL2_UE4_TaiChi/blob/main/Content/images/voice_commands_project_settings_01.JPG)

The voice control for the HL2 needs to be set up in the Level Blueprint, I didn’t get it to work in the Actor’s blueprints. I am sure there is a great reason for it, but I haven’t figured it out yet.
The OverrideAnimationData and PlayAnimation nodes are simply pointing to the character's skeletal animation.
Start and Pause commands are connected to the OverRideAnimation node, changing the animation speed to 1 or 0, with the Restart command plugged to the PlayAnimation node, forcing the animation to, wait for it, restart.

![spawn](https://github.com/Species521/HL2_UE4_TaiChi/blob/main/Content/images/Level_BP_eventgraph_01.JPG)

The animated model’s Actor blueprint is very straight-forward, pausing and resetting the animation and contains the UxtGenericManipulator component for the hand manipulation to work.
I created a box around the mesh as a bounding box for the hand manipulators to respond and assigned the invisible material MI_BoundsControl.

![spawn](https://github.com/Species521/HL2_UE4_TaiChi/blob/main/Content/images/taichi_character_bp_screen_01.JPG)

# Notes

This app contains only one Tai Chi form, the basic 6 Steps Yang Style.
I recorded myself myself and used the image sequence to keyframe animate it in Maya. The texture, AO etc was done in Substance Painter.

![spawn](https://github.com/Species521/HL2_UE4_TaiChi/blob/main/Content/images/taichi_character_maya_01.JPG)

A nice model with better textures is in the works, but I can't really say when I'll be able to queeze it in my schedule.
Nevertheless, I am pretty sure some of you will be able to add new features and nicer visuals in no time.

You are free to download and play with this project as you like. In case you re-use parts of it in your own projects, please be so kind to mention where you got it from.
Thank you and have fun creating.
