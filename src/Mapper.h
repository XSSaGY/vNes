#pragma once

#include "stdint.h"
#include "Rominfo.h"


class Mapper
{
	rominfo_t * rominfo;
public:
	Mapper(rominfo_t* rominfo);//��ʼ��rominfo��ֵ
};
