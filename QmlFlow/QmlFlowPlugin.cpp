#include "QmlFlowPlugin.h"

#include <qqml.h>

#include "FlowGraph.h"
#include "FlowNode.h"
#include "FlowPort.h"
#include "FlowObject.h"
#include "FlowObjectStorage.h"
#include "FlowJsonStorage.h"
#include "FlowRequestRouter.h"

#include "FlowTracer.h"
#include "FlowMonitor.h"
#include "FlowNodeMonitorInfo.h"
#include "FlowRestService.h"
#include "FlowRestConnection.h"
#include "FlowNodeServiceInfo.h"


void QmlFlowPlugin::registerTypes(const char *uri)
{
    // @uri com.chezgi.qmlflow

    qmlRegisterUncreatableType<FlowObject>("Flow", 1, 0, "Object","Flow.Object is pure Virtual. use subclasses.");
    qmlRegisterUncreatableType<FlowPort>("Flow", 1, 0, "Port","Use Directioned Ports.");
    qmlRegisterUncreatableType<FlowNodeMonitorInfo>("Flow", 1, 0, "NodeMonitorInfo","Only usable as flownode.");
    qmlRegisterUncreatableType<FlowNodeServiceInfo>("Flow", 1, 0, "NodeServiceInfo","Only usable as flownode.");
    qmlRegisterUncreatableType<FlowRestConnection>("Flow", 1, 0, "RestConnection","Only for FlowService");

    qmlRegisterType<FlowGraph>("Flow", 1, 0, "Graph");
    qmlRegisterType<FlowObjectStorage>("Flow", 1, 0, "ObjectStorage");
    qmlRegisterType<FlowJsonStorage>("Flow", 1, 0, "JsonStorage");
    qmlRegisterType<FlowMonitor>("Flow", 1, 0, "Monitor");

    qmlRegisterType<FlowRestService>("Flow", 1, 0, "Service");

    qmlRegisterType<FlowNode>("Flow", 1, 0, "Node");

    qmlRegisterType<FlowRequestRouter>("Flow", 1, 0, "RequestRouter");
    qmlRegisterType<FlowInPort>("Flow", 1, 0, "InPort");
    qmlRegisterType<FlowOutPort>("Flow", 1, 0, "OutPort");
}


