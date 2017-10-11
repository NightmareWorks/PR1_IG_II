#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto()
{
}


ObjetoCompuesto::~ObjetoCompuesto()
{
}

void ObjetoCompuesto::dibuja() {
	glColor3f(color->getX(), color->getY(), color->getZ());
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(this->mt->m);
	for (int i = 0; i<numHijos; i++)
		hijos[i]->dibuja();
	glPopMatrix();
}