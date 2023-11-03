<p align="center">
	<img src="" alt="Banner" />
	<br />
	<a href="https://discord.gg/9pJTHHzaFC">
		<img src="https://img.shields.io/discord/1032437213100777502.svg?label=Discord&logo=Discord&colorB=7289da&style=for-the-badge" alt="Viking Studios Discord Server">
	</a>
  	<a href="https://discord.gg/aYeNxFuHtC">
		<img src="https://img.shields.io/discord/1032437213100777502.svg?label=Discord&logo=Discord&colorB=7289da&style=for-the-badge" alt="Enclave Discord Server">
	</a>
	<a href="https://steamcommunity.com/sharedfiles/filedetails/?id=3016023028">
		<img src="https://img.shields.io/steam/subscriptions/3016023028?style=for-the-badge" alt="Steam Subscriptions">
	</a>
	
</p>
</p>
<p align="center">
	<a href="">
		<img src="https://img.shields.io/steam/size/3016023028?label=Download&logo=steam" alt="Download" />
	</a>
	<a href="https://github.com/Viking-Studios-Arma/29th-Enclave-Aux-Mod/releases">
		<img src="https://img.shields.io/github/release/Viking-Studios-Arma/ONI_Recon_Core.svg?label=Version" alt="Version" />
	</a>
	<a href="https://github.com/Viking-Studios-Arma/29th-Enclave-Aux-Mod/issues">
		<img src="http://img.shields.io/github/issues-raw/Viking-Studios-Arma/ONI_Recon_Core.svg?label=Issues&style=flat" alt="Issues" />
	</a>
	<a href="https://github.com/Viking-Studios-Arma/29th-Enclave-Aux-Mod/blob/main/LICENSE">
		<img src="https://img.shields.io/github/license/Viking-Studios-Arma/ONI_Recon_Core.svg?style=flat&label=Licence" alt="License">
	</a>
</p>

<p>

Adding much-needed functionality to the Arma 3 game for the 29th Enclave Detachments group through a collection of open source scripts and in house retextures.

Features include;
- Admin Messages


</p>

## Dependencies
### Required
- [CBA A3](https://steamcommunity.com/sharedfiles/filedetails/?id=450814997)
- [ACE](https://steamcommunity.com/workshop/filedetails/?id=463939057)

# For Developers of this mod
## Install
We have a build system to allow for key signing and addon compiling.

### Requirements
1. [Git for Windows](https://git-scm.com/download/win)
1. Windows PowerShell v5.1 or higher

<ins>Automated Process:</ins>

To automatically set up your system and build the mod you can execute the included `build.bat` file.
You can do this by either going to `\tools` and double clicking the `build.bat` file, or if you use VSC you can select the bat file then in the `TERMINAL` at the bottom you can select the `Run Active File` option from the `...` menu.

<ins>Manual Proccess:</ins>

To set up your system to use the build script:
- Open Windows PowerShell as Administrator and execute `set-executionpolicy remotesigned`
- In the future, always use PowerShell as Admin

### Windows
If on Windows, use the `tools\make.ps1` file to build the mod for you. It will build the mod, sign the addons, include the public key in the `keys` folder, and also copy across all files found in the `extras` folder, as well as the files specified in the file `tools\support-files.txt`.

The build script will NOT leave the private key in the `keys` folder. It will delete it instead, to avoid any accidental uploading or distribution.

Be aware, that the names of the `.bisign` and `.bikey` files depend on the latest tag on git. This means that, if you wish to upload a release, it is advised to first tag the latest git commit, and then build the mod. That way you have a nice version, such as `VS_ONI_C_v1.0.0.bikey` rather than `VS_ONI_C_-gae17a97.bikey`.

## Naming conventions
For standardisation between class names and to prevent any possible future conflicts with class names the following naming convention has been developed:
- for code: ONI_Core
- for presentation: ONI Core - {Addon Name}

## Credits

Thank you to GRAD for the admin messages

## License Adjustments to be in line with Requirements from above Credits

Admin_Messages is released under GPL2.0 (This will be specified in each file)

</p>
<br />
