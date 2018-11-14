				-------------------------------------------------
										 
			 Copyright ©2017 - 2018, Canned Goods and Services (c-gas), Inc.

					   ___ ______ __ _  __ _ ___  
					  / __|______/ _` |/ _` / __| 
					 | (__      | (_| | (_| \__ \ 
					  \___|      \__, |\__,_|___/ 
	                                            / |           
			                           |___/            
				--------------------------------------------------

	 The git repository for this project is hosted on https://www.github.com/c-gas/roguelike-bot
	 This project is based on the sleepy-discord library.

												
					         CONTRIBUTORS
												     
				This is the list of contributors for the current release:
				-b3rb

											

						 COMPILING INSTRUCTIONS
				
		These instructions assume you are running Linux and are in the projects root directory. Compiling on Windows may be 
		possible however I have not tested it. I use CMake to compile however compiling with g++ is possible.

						Option 1: Setup Script
		Make sure you have CMake and make installed. Edit bot.cpp so that 'token' is replaced with your actual login token. 
		Navigate to the build folder and execute compile.sh. This script does not require root permissions. This will produce 
		the 'bot' file which can be executed with ./bot. 

		$cd build/
		$./compile.sh

						Option 2: Manual
		Make sure you have CMake and make installed. Edit bot.cpp so that 'token' is replaced with your actual login token. 
		Navigate to the build folder. Generate a makefile with CMake of the previous directory and store it in the current 
		directory. Execute this file. This will produce the 'bot' file which can be executed with ./bot. 

		$cd build/
		$cmake ..
		$make
