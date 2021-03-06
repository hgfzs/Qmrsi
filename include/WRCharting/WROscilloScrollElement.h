﻿#pragma once
#ifndef WROSCILLOSCROLLELEMENT
#define WROSCILLOSCROLLELEMENT

#include <WRCharting/WRGlobal.h>
#include <WRCharting/WRChartScrollElement.h>

//#pragma warning(push)
//#pragma warning(disable:4251)

//表示波形图横向坐标轴元素。
class WRCHARTING_CLASS WROscilloHScrollElement : public WRChartHScrollElement
{
    Q_OBJECT

    friend class WROscilloControl;

private:
	//初始化当前对象。
	WROscilloHScrollElement(void)
	{
		//add code here
	}
	//清理当前对象所占用的相关资源。
	~WROscilloHScrollElement(void)
	{
		//add code here
	}

protected:
	//鼠标滚动处理，如果需要重绘，则返回True。
	bool onMouseWheel(const QWheelEvent& e);
	//鼠标按下处理，如果需要重绘，则返回True。
	bool onMouseDown(const QMouseEvent& e);
	//鼠标释放处理，如果需要重绘，则返回True。
	bool onMouseUp(const QMouseEvent& e);
	//鼠标移动处理，如果需要重绘，则返回True。
	bool onMouseMove(const QMouseEvent& e);

	//执行绘制处理。
	void onPaint(QPainter& painter);
	//执行所有绘制后，如果元素捕获了鼠标或者鼠标正处于此元素之上，将调用此方法进行相应的绘制处理。
	void onPaintMouseFeedback(QPainter& painter);
};

//表示波形图纵向坐标轴元素。
class WRCHARTING_CLASS WROscilloVScrollElement : public WRChartVScrollElement
{
    Q_OBJECT

    friend class WROscilloControl;

private:
	//初始化当前对象。
	WROscilloVScrollElement(void)
	{
		//add code here
	}
	//清理当前对象所占用的相关资源。
	~WROscilloVScrollElement(void)
	{
		//add code here
	}

protected:
	//鼠标滚动处理，如果需要重绘，则返回True。
	bool onMouseWheel(const QWheelEvent& e);
	//鼠标按下处理，如果需要重绘，则返回True。
	bool onMouseDown(const QMouseEvent& e);
	//鼠标释放处理，如果需要重绘，则返回True。
	bool onMouseUp(const QMouseEvent& e);
	//鼠标移动处理，如果需要重绘，则返回True。
	bool onMouseMove(const QMouseEvent& e);

	//执行绘制处理。
	void onPaint(QPainter& painter);
	//执行所有绘制后，如果元素捕获了鼠标或者鼠标正处于此元素之上，将调用此方法进行相应的绘制处理。
	void onPaintMouseFeedback(QPainter& painter);
};

//#pragma warning(pop)

#endif //WROSCILLOSCROLLELEMENT
