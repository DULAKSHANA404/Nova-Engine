#version 330 core

layout(location=0) vec3 Postitios;

void main()
{
	gl_Position = vec4(Postitios,1);
}