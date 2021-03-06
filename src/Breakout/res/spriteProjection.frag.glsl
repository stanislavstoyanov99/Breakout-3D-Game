#version 460 core

in vec2 textureCoordinate;	//Texture coords from vertex shader
out vec4 fragmentColour;	//Output colour of vertex

uniform sampler2D uTexture;	//uniform holding texture info from main program
uniform vec3 uColour;		//uniform for holding colour info from main program

void main()
{
	//Assign the output colour of vertex from the passed colour and texture
    fragmentColour = vec4(uColour, 1.0) * texture(uTexture, textureCoordinate);
}