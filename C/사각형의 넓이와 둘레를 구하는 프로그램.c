#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
		
};

struct rect
{
	struct point p1;
	struct point p2;
		
};



int main (void)

{
	struct rect r;
	int w, h, area, peri; //area ����, peri �ѷ� 
	
	printf("���� ����� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("������ �ϴ��� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = (w + h) * 2;
	
	printf("�簢���� ���̴� %d�̰�, �ѷ��� %d�Դϴ�.", area, peri);
	
	return 0;
}


