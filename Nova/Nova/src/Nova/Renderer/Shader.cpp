#include "Shader.h"
#include "ReadShaderSource.h"

namespace Nova
{
	void Shaders::ShaderInit()
	{
		VertexShader = glCreateShader(GL_VERTEX_SHADER);
		FragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

		ProgramID = glCreateProgram();
	}

	void Shaders::CompileVertexShader()
	{
		std::string temp = ReadShaderSource("Assets/Shaders/vertexshader.glsl");
		const char* vertexshadersource = temp.c_str();

		glShaderSource(VertexShader, 1, &vertexshadersource, 0);
		glCompileShader(VertexShader);
		glAttachShader(ProgramID, VertexShader);
	}

	void Shaders::CompileFragmentShader()
	{
		std::string temp = ReadShaderSource("Assets/Shaders/fragmentshader.glsl");
		const char* fragmentshadersource = temp.c_str();

		glShaderSource(FragmentShader, 1, &fragmentshadersource, 0);
		glCompileShader(FragmentShader);
		glAttachShader(ProgramID, FragmentShader);
	}

	void Shaders::CompilePrograme()
	{
		glLinkProgram(ProgramID);
		glDeleteShader(VertexShader);
		glDeleteShader(FragmentShader);
	}
}