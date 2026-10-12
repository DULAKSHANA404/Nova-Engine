#pragma once

#include <glad/glad.h>

namespace Nova
{
	class Buffer
	{
	protected:
		GLuint VBO = 0;
		GLuint EBO = 0;
		GLuint VAO = 0;
	public:
		Buffer();
		void VertexBuffer(GLfloat* verticies, size_t sizeofverticies);
		void ElementBuffer(GLfloat* indicies, size_t sizeofindicies);
		void VertexArray();
	};
}