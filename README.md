# Larger ACE Nightvision Border

**Do you like ACE's cool nightvision effects, but hate feeling like you have to look through a pin hole to see anything?! Then this is the mod for you! :D**

*Want the **whole** border gone? Check out my other mod: [Removed ACE Nightvision Border](https://steamcommunity.com/sharedfiles/filedetails/?id=2291593118)

## Description:
This mod is intended for people running Arma 3 with a higher Field of View (FOV) setting. Running Arma with a higher FOV unfortunately makes all the ACE nightvision borders terribly small and hard to see through. This mod attempts to improve your ACE Nightvision experience by making all the nightvision boarders / blinders / eye cups (whatever you want to call them) 200% larger.

The mod was tested using an FOV of 90 degrees to get the size right. If you would like to try using a FOV 90 degrees, you can change these settings in your `\My Documents\Arma 3 - Other Profiles\YourProfile\YourProfile.Arma3Profile` file:
```c
fovTop=1.03;
fovLeft=1.83;
```

## Features:
**Increases the ACE nightvision borders by 200% for the following NVGs:**
- *Most* vanilla NVGs (See "Known Issues" for more)
- All ACE NVGs
- All RHS NVGs (if RHS is loaded)
- All CUP NVGs (if CUP is loaded)
- Any other mod NVGs that extend the `NVGoggles` or ACE NVG classes, AND do not override `ace_nightvision_border` attribute.

## Mod Requirements:
- [ACE 3](https://steamcommunity.com/workshop/filedetails/?id=463939057) OR any fork of ACE 3 that uses a similar ACE Nightvision framework.

## Compatibility:
- [Larger ACE Nightvision Border - US-SOC Compat](https://steamcommunity.com/sharedfiles/filedetails/?id=2550990172)
- Will not conflict with any other mods.

## Multiplayer Requirements:
- This mod can be run as an optional client-side only mod if desired.
- It is not required to run this mod server-side for it to work.
- Server .bikey is included.

## Known Issues:
- Unfortunately, due to how ACE applies the borders, I cannot make their size adjustable/configurable. That means using FOVs smaller or larger than 90 may lead to wider or tighter borders respectively.
- Does not currently work with any NVGs that also have an IR/Thermal mode, as ACE does not apply nightvision effects to these goggles yet.

## Mod Packing / License:
- This mod is licensed under the [Arma Public License Share Alike (APL-SA)](https://www.bohemia.net/community/licenses/arma-public-license-share-alike), and conforms to ACE's GNU General Public License. If there are any issues, please contact this mod's author directly for an immediate resolution to your concern.
- I would prefer that you **do not** repack my mod in a another mod / mod pack; but the APL-SA license technically allows it **as long as you give credit and the license stays intact**.