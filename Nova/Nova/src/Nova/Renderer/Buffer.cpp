#include "Buffer.h"

namespace Nova
{
	void Buffer::BufferInit()
	{
		glGenVertexArrays(1, &VAO);
		glBindVertexArray(VAO);

		glGenBuffers(1, &VBO);
		glGenBuffers(1, &EBO);

		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	}

	void Buffer::VertexBuffer(GLfloat* verticies, size_t sizeofverticies)
	{
		glBufferData(GL_ARRAY_BUFFER, sizeofverticies, verticies, GL_STATIC_DRAW);
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
		glEnableVertexAttribArray(0);
	}

	void Buffer::ElementBuffer(GLuint* indicies, size_t sizeofindicies)
	{
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeofindicies,indicies, GL_STATIC_DRAW);
	}

	void Buffer::VertexArray()
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
		glBindVertexArray(0);
	}
}