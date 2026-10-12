#version 330 core

layout(location=0) vec3 Postitios;

out vec3 color;

void main()
{
	gl_Position = vec4(Postitios,1);
	color = vec3(1,0,1);
}