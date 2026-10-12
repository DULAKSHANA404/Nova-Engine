#pragma once

#include <glad/glad.h>

namespace Nova
{
	class Buffer
	{
	protected:
		GLuint VBO;
		GLuint EBO;
		GLuint VAO;
	public:
		Buffer() = default;
		void BufferInit();
		void VertexBuffer(GLfloat* verticies, size_t sizeofverticies);
		void ElementBuffer(GLfloat* indicies, size_t sizeofindicies);
		void VertexArray();
	};
}