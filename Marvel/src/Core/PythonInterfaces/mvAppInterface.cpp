#include "Core/PythonUtilities/mvPythonModule.h"
#include "Core/mvApp.h"
#include "Core/PythonUtilities/mvPythonTranslator.h"
#include "Core/AppItems/mvAppItems.h"
#include "mvInterfaces.h"
#include "mvInterfaceRegistry.h"

namespace Marvel {

	static std::map<std::string, mvPythonTranslator> Translators = mvInterfaceRegistry::GetRegistry()->getPythonInterface("sbApp");

	std::map<std::string, mvPythonTranslator> BuildAppInterface() {

		std::map<std::string, mvPythonTranslator> translators = {

				{"setThreadPoolThreshold", mvPythonTranslator({
					{mvPythonDataType::Float, "time"}
				}, false, "Needs documentation")},

				{"setThreadCount", mvPythonTranslator({
					{mvPythonDataType::Integer, "threads"}
				}, false, "Needs documentation")},

				{"setThreadPoolAuto", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"showDocumentation", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"showAbout", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"showMetrics", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"closePopup", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"showSource", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"activateThreadPool", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"setThreadPoolHighPerformance", mvPythonTranslator({
				}, false, "Needs documentation")},

				{"addItemColorStyle", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::Integer, "style"},
					{mvPythonDataType::FloatList, "color"}
				}, false, "Needs documentation")},

				{"isItemHovered", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"setMainWindowSize", mvPythonTranslator({
					{mvPythonDataType::Integer, "width"},
					{mvPythonDataType::Integer, "height"}
				}, false, "Needs documentation")},

				{"isItemActive", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemFocused", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemClicked", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemVisible", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemEdited", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemActivated", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemDeactivated", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemDeactivatedAfterEdit", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"isItemToggledOpen", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"getItemRectMin", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"getItemRectMax", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"getItemRectSize", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
				}, false, "Needs documentation")},

				{"changeStyleItem", mvPythonTranslator({
					{mvPythonDataType::Integer, "item"},
					{mvPythonDataType::Float, "x"},
					{mvPythonDataType::Optional},
					{mvPythonDataType::Float, "y"}
				}, false, "Needs documentation")},

				{"changeThemeItem", mvPythonTranslator({
					{mvPythonDataType::Integer, "item"},
					{mvPythonDataType::Float, "r"},
					{mvPythonDataType::Float, "g"},
					{mvPythonDataType::Float, "b"},
					{mvPythonDataType::Float, "a"}
				}, false, "Needs documentation")},

				{"getValue", mvPythonTranslator({
					{mvPythonDataType::String, "name"}
				}, false, "Needs documentation")},

				{"setValue", mvPythonTranslator({
					{mvPythonDataType::String, "name"},
					{mvPythonDataType::Object, "value"}
				}, false, "Needs documentation")},

				{"showItem", mvPythonTranslator({
					{mvPythonDataType::String, "name"}
				}, false, "Needs documentation")},

				{"hideItem", mvPythonTranslator({
					{mvPythonDataType::String, "name"}
				}, false, "Needs documentation")},

				{"setMainCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation")},

				{"setMouseDownCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation")},

				{"setMouseDoubleClickCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation")},

				{"setMouseClickCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation")},

				{ "setKeyDownCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation") },

				{ "setKeyPressCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation") },

				{ "setKeyReleaseCallback", mvPythonTranslator({
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation") },

				{ "setItemCallback", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::String, "callback"}
				}, false, "Needs documentation") },

				{ "setItemPopup", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::String, "popup"}
				}, false, "Needs documentation") },

				{ "setItemTip", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::String, "tip"}
				}, false, "Needs documentation") },

				{ "setItemWidth", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::Integer, "width"}
				}, false, "Needs documentation") },

				{ "setItemHeight", mvPythonTranslator({
					{mvPythonDataType::String, "item"},
					{mvPythonDataType::Integer, "height"}
				}, false, "Needs documentation") },

				{ "setTheme", mvPythonTranslator({
					{mvPythonDataType::String, "theme"}
				}, false, "Needs documentation") },

		};

		return translators;
	}

	PyObject* setThreadPoolThreshold(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		float time;

		if (!Translators["setThreadPoolThreshold"].parse(args, kwargs, __FUNCTION__, &time))
			Py_RETURN_NONE;

		mvApp::GetApp()->setThreadPoolThreshold(time);

		Py_RETURN_NONE;
	}

	PyObject* setThreadCount(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		int threads;

		if (!Translators["setThreadCount"].parse(args, kwargs, __FUNCTION__, &threads))
			Py_RETURN_NONE;

		mvApp::GetApp()->setThreadCount(threads);

		Py_RETURN_NONE;
	}

	PyObject* setThreadPoolAuto(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->setThreadPoolAuto();
		Py_RETURN_NONE;
	}

	PyObject* activateThreadPool(PyObject* self, PyObject* args, PyObject* kwargs)
	{

		mvApp::GetApp()->activateThreadPool();

		Py_RETURN_NONE;
	}

	PyObject* setThreadPoolHighPerformance(PyObject* self, PyObject* args, PyObject* kwargs)
	{

		mvApp::GetApp()->setThreadPoolHighPerformance();

		Py_RETURN_NONE;
	}

	PyObject* addItemColorStyle(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;
		int style;
		PyObject* color;

		if (!Translators["addItemColorStyle"].parse(args, kwargs, __FUNCTION__, &item, &style, &color))
			Py_RETURN_NONE;

		auto mcolor = mvPythonTranslator::getColor(color);

		mvApp::GetApp()->addItemColorStyle(item, style, mcolor);

		Py_RETURN_NONE;
	}

	PyObject* isItemHovered(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemHovered"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemHovered());

		Py_RETURN_NONE;
	}

	PyObject* isItemActive(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemActive"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemActive());

		Py_RETURN_NONE;
	}

	PyObject* isItemFocused(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemFocused"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemFocused());

		Py_RETURN_NONE;
	}

	PyObject* isItemClicked(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemClicked"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemClicked());

		Py_RETURN_NONE;
	}

	PyObject* isItemVisible(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemVisible"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemVisible());

		Py_RETURN_NONE;
	}

	PyObject* isItemEdited(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemEdited"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemEdited());

		Py_RETURN_NONE;
	}

	PyObject* isItemActivated(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemActivated"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemActivated());

		Py_RETURN_NONE;
	}

	PyObject* isItemDeactivated(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemDeactivated"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemDeactivated());

		Py_RETURN_NONE;
	}

	PyObject* isItemDeactivatedAfterEdit(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemDeactivatedAfterEdit"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemDeactivatedAfterEdit());

		Py_RETURN_NONE;
	}

	PyObject* isItemToggledOpen(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["isItemToggledOpen"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			return Py_BuildValue("i", appitem->isItemToogledOpen());

		Py_RETURN_NONE;
	}

	PyObject* getItemRectMin(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["getItemRectMin"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
		{
			mvVec2 value = appitem->getItemRectMin();
			PyObject* pvalue = PyTuple_New(2);
			PyTuple_SetItem(pvalue, 0, PyFloat_FromDouble(value.x));
			PyTuple_SetItem(pvalue, 1, PyFloat_FromDouble(value.y));
			return pvalue;
		}

		Py_RETURN_NONE;
	}

	PyObject* getItemRectMax(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["getItemRectMax"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
		{
			mvVec2 value = appitem->getItemRectMax();
			PyObject* pvalue = PyTuple_New(2);
			PyTuple_SetItem(pvalue, 0, PyFloat_FromDouble(value.x));
			PyTuple_SetItem(pvalue, 1, PyFloat_FromDouble(value.y));
			return pvalue;
		}

		Py_RETURN_NONE;
	}

	PyObject* getItemRectSize(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;

		if (!Translators["getItemRectSize"].parse(args, kwargs,__FUNCTION__, &item))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
		{
			mvVec2 value = appitem->getItemRectSize();
			PyObject* pvalue = PyTuple_New(2);
			PyTuple_SetItem(pvalue, 0, PyFloat_FromDouble(value.x));
			PyTuple_SetItem(pvalue, 1, PyFloat_FromDouble(value.y));
			return pvalue;
		}

		Py_RETURN_NONE;
	}

	PyObject* changeStyleItem(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		int item;
		float x = 0.0f;
		float y = 0.0f;

		if (!Translators["changeStyleItem"].parse(args, kwargs,__FUNCTION__, &item, &x, &y))
			Py_RETURN_NONE;

		mvApp::GetApp()->changeStyleItem(item, x, y);

		Py_RETURN_NONE;
	}

	PyObject* changeThemeItem(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		int item;
		int r, g, b, a;

		if(!Translators["changeThemeItem"].parse(args, kwargs,__FUNCTION__, &item, &r, &g, &b, &a))
			Py_RETURN_NONE;

		mvApp::GetApp()->changeThemeItem(item, { r, g, b, a });

		

		Py_RETURN_NONE;
	}

	PyObject* getValue(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* name;

		if(!Translators["getValue"].parse(args, kwargs,__FUNCTION__, &name))
			Py_RETURN_NONE;

		mvAppItem* item = mvApp::GetApp()->getItem(std::string(name));

		if(item == nullptr)
			Py_RETURN_NONE;

		return item->getPyValue();
	}

	PyObject* setValue(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* name;
		PyObject* value;

		if(!Translators["setValue"].parse(args, kwargs,__FUNCTION__, &name, &value))
			Py_RETURN_NONE;

		mvAppItem* item = mvApp::GetApp()->getItem(std::string(name));

		if (item == nullptr)
			Py_RETURN_NONE;

		item->setPyValue(value);
		Py_RETURN_NONE;
	}

	PyObject* showItem(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* name;

		if(!Translators["showItem"].parse(args, kwargs,__FUNCTION__, &name))
			Py_RETURN_NONE;

		mvAppItem* item = mvApp::GetApp()->getItem(std::string(name));

		if (item != nullptr)
			item->show();

		Py_RETURN_NONE;
	}

	PyObject* hideItem(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* name;

		if(!Translators["hideItem"].parse(args, kwargs,__FUNCTION__, &name))
			Py_RETURN_NONE;

		mvAppItem* item = mvApp::GetApp()->getItem(std::string(name));

		if (item != nullptr)
			item->hide();

		Py_RETURN_NONE;
	}

	PyObject* setMainCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;


		if(!Translators["setMainCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setMainCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setMouseDownCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setMouseDownCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setMouseDownCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setMouseDoubleClickCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setMouseDoubleClickCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setMouseDoubleClickCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setMouseClickCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setMouseClickCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setMouseClickCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setKeyDownCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setKeyDownCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setKeyDownCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setKeyPressCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setKeyPressCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setKeyPressCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setKeyReleaseCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;

		if (!Translators["setKeyReleaseCallback"].parse(args, kwargs,__FUNCTION__, &callback))
			Py_RETURN_NONE;

		mvApp::GetApp()->setKeyReleaseCallback(std::string(callback));

		

		Py_RETURN_NONE;
	}

	PyObject* setItemCallback(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* callback;
		const char* item;
		
		if(!Translators["setItemCallback"].parse(args, kwargs,__FUNCTION__, &item, &callback))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			appitem->setCallback(callback);

		Py_RETURN_NONE;
	}

	PyObject* setItemPopup(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* popup;
		const char* item;

		if (!Translators["setItemPopup"].parse(args, kwargs,__FUNCTION__, &item, &popup))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			appitem->setPopup(popup);

		Py_RETURN_NONE;
	}

	PyObject* setItemTip(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* tip, * item;

		if(!Translators["setItemTip"].parse(args, kwargs,__FUNCTION__, &item, &tip))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			appitem->setTip(tip);

		Py_RETURN_NONE;
	}

	PyObject* setItemWidth(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;
		int width;

		if(!Translators["setItemWidth"].parse(args, kwargs,__FUNCTION__, &item, &width))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			appitem->setWidth(width);
		

		Py_RETURN_NONE;
	}

	PyObject* setItemHeight(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* item;
		int height;

		if (!Translators["setItemHeight"].parse(args, kwargs, __FUNCTION__, &item, &height))
			Py_RETURN_NONE;

		auto appitem = mvApp::GetApp()->getItem(item);

		if (appitem)
			appitem->setHeight(height);


		Py_RETURN_NONE;
	}

	PyObject* setMainWindowSize(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		int width;
		int height;

		if (!Translators["setMainWindowSize"].parse(args, kwargs, __FUNCTION__, &width, &height))
			Py_RETURN_NONE;

		mvApp::GetApp()->setWindowSize(width, height);

		Py_RETURN_NONE;
	}

	PyObject* closePopup(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->closePopup();
		
		Py_RETURN_NONE;
	}

	PyObject* setTheme(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		const char* theme;

		if(!Translators["setTheme"].parse(args, kwargs,__FUNCTION__, &theme))
			Py_RETURN_NONE;

		mvApp::GetApp()->setAppTheme(std::string(theme));

		

		Py_RETURN_NONE;
	}

	PyObject* showMetrics(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->showMetrics();

		

		Py_RETURN_NONE;
	}

	PyObject* showAbout(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->showAbout();
		Py_RETURN_NONE;
	}

	PyObject* showSource(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->showSource();
		Py_RETURN_NONE;
	}

	PyObject* showDocumentation(PyObject* self, PyObject* args, PyObject* kwargs)
	{
		mvApp::GetApp()->showDoc();
		Py_RETURN_NONE;
	}

	mvPythonModule* CreatePythonInterface()
	{

		mvPythonModule* pyModule = new mvPythonModule("sbApp", {});

		pyModule->addMethodD(setThreadPoolAuto);
		pyModule->addMethodD(showSource);
		pyModule->addMethodD(showAbout);
		pyModule->addMethodD(showMetrics);
		pyModule->addMethodD(closePopup);
		pyModule->addMethodD(showDocumentation);
		pyModule->addMethodD(setThreadPoolThreshold);
		pyModule->addMethodD(setThreadCount);
		pyModule->addMethodD(activateThreadPool);
		pyModule->addMethodD(setThreadPoolHighPerformance);
		pyModule->addMethodD(setMainWindowSize);
		pyModule->addMethodD(addItemColorStyle);
		pyModule->addMethodD(setItemPopup);
		pyModule->addMethodD(isItemHovered);
		pyModule->addMethodD(isItemActive);
		pyModule->addMethodD(isItemFocused);
		pyModule->addMethodD(isItemClicked);
		pyModule->addMethodD(isItemVisible);
		pyModule->addMethodD(isItemEdited);
		pyModule->addMethodD(isItemActivated);
		pyModule->addMethodD(isItemDeactivated);
		pyModule->addMethodD(isItemDeactivatedAfterEdit);
		pyModule->addMethodD(isItemToggledOpen);
		pyModule->addMethodD(getItemRectMin);
		pyModule->addMethodD(getItemRectMax);
		pyModule->addMethodD(getItemRectSize);
		pyModule->addMethodD(setMouseClickCallback);
		pyModule->addMethodD(setMouseDownCallback);
		pyModule->addMethodD(setMouseDoubleClickCallback);
		pyModule->addMethodD(setKeyDownCallback);
		pyModule->addMethodD(setKeyPressCallback);
		pyModule->addMethodD(setKeyReleaseCallback);
		pyModule->addMethodD(changeStyleItem);
		pyModule->addMethodD(showItem);
		pyModule->addMethodD(hideItem);
		pyModule->addMethodD(changeThemeItem);
		pyModule->addMethodD(setTheme);
		pyModule->addMethodD(setMainCallback);
		pyModule->addMethodD(setItemCallback);
		pyModule->addMethodD(setItemTip);
		pyModule->addMethodD(setItemWidth);
		pyModule->addMethodD(setItemHeight);
		pyModule->addMethodD(getValue);
		pyModule->addMethodD(setValue);

		//PyImport_AppendInittab(pyModule.getName().c_str(), initfunc);

		return pyModule;
	}
}