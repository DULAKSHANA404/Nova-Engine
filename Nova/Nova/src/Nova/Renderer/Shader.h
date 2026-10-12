#pragma once
#include <glad/glad.h>

namespace Nova
{
	class Shaders
	{
	protected:
		GLuint VertexShader;
		GLuint FragmentShader;
		GLuint ProgramID;

	public:
		Shaders() = default;
		void ShaderInit();
		void CompileFragmentShader();
		void CompileVertexShader();
		void CompilePrograme();
	};
}