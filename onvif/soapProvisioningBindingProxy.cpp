/* soapProvisioningBindingProxy.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapProvisioningBindingProxy.h"

ProvisioningBindingProxy::ProvisioningBindingProxy()
{	this->soap = soap_new();
	this->own = true;
	ProvisioningBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ProvisioningBindingProxy::ProvisioningBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	ProvisioningBindingProxy_init(_soap->imode, _soap->omode);
}

ProvisioningBindingProxy::ProvisioningBindingProxy(const char *url)
{	this->soap = soap_new();
	this->own = true;
	ProvisioningBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

ProvisioningBindingProxy::ProvisioningBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ProvisioningBindingProxy_init(iomode, iomode);
}

ProvisioningBindingProxy::ProvisioningBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ProvisioningBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

ProvisioningBindingProxy::ProvisioningBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	ProvisioningBindingProxy_init(imode, omode);
}

ProvisioningBindingProxy::~ProvisioningBindingProxy()
{	if (this->own)
		soap_free(this->soap);
}

void ProvisioningBindingProxy::ProvisioningBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"ns2", "http://www.onvif.org/ver10/pacs", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"name", "http://www.onvif.org/ver10/advancedsecurity/wsdl/AdvancedSecurityServiceBinding", NULL, NULL},
	{"name10", "http://www.onvif.org/ver10/events/wsdl/NotificationProducerBinding", NULL, NULL},
	{"name11", "http://www.onvif.org/ver10/events/wsdl/NotificationConsumerBinding", NULL, NULL},
	{"name12", "http://www.onvif.org/ver10/events/wsdl/PullPointBinding", NULL, NULL},
	{"name13", "http://www.onvif.org/ver10/events/wsdl/CreatePullPointBinding", NULL, NULL},
	{"name14", "http://www.onvif.org/ver10/events/wsdl/PausableSubscriptionManagerBinding", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"name2", "http://www.onvif.org/ver10/advancedsecurity/wsdl/KeystoreBinding", NULL, NULL},
	{"name3", "http://www.onvif.org/ver10/advancedsecurity/wsdl/TLSServerBinding", NULL, NULL},
	{"name4", "http://www.onvif.org/ver10/advancedsecurity/wsdl/Dot1XBinding", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/advancedsecurity/wsdl", NULL, NULL},
	{"name5", "http://www.onvif.org/ver20/analytics/wsdl/RuleEngineBinding", NULL, NULL},
	{"name6", "http://www.onvif.org/ver20/analytics/wsdl/AnalyticsEngineBinding", NULL, NULL},
	{"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{"name7", "http://www.onvif.org/ver10/events/wsdl/PullPointSubscriptionBinding", NULL, NULL},
	{"name8", "http://www.onvif.org/ver10/events/wsdl/EventBinding", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"name9", "http://www.onvif.org/ver10/events/wsdl/SubscriptionManagerBinding", NULL, NULL},
	{"ns1", "http://www.onvif.org/ver10/accesscontrol/wsdl", NULL, NULL},
	{"ns10", "http://www.onvif.org/ver10/provisioning/wsdl", NULL, NULL},
	{"ns11", "http://www.onvif.org/ver10/schedule/wsdl", NULL, NULL},
	{"ns12", "http://www.onvif.org/ver10/thermal/wsdl", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/accessrules/wsdl", NULL, NULL},
	{"ns4", "http://www.onvif.org/ver10/actionengine/wsdl", NULL, NULL},
	{"ns6", "http://www.onvif.org/ver10/authenticationbehavior/wsdl", NULL, NULL},
	{"ns7", "http://www.onvif.org/ver10/credential/wsdl", NULL, NULL},
	{"ns8", "http://www.onvif.org/ver10/doorcontrol/wsdl", NULL, NULL},
	{"ns9", "http://www.onvif.org/ver20/media/wsdl", NULL, NULL},
	{"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void ProvisioningBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ProvisioningBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ProvisioningBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ProvisioningBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void ProvisioningBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsse__Security = wsse__Security;
}

const SOAP_ENV__Header *ProvisioningBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *ProvisioningBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *ProvisioningBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *ProvisioningBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int ProvisioningBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int ProvisioningBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void ProvisioningBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ProvisioningBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ProvisioningBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int ProvisioningBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns10__GetServiceCapabilities *ns10__GetServiceCapabilities, _ns10__GetServiceCapabilitiesResponse *ns10__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __ns10__GetServiceCapabilities soap_tmp___ns10__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__GetServiceCapabilities.ns10__GetServiceCapabilities = ns10__GetServiceCapabilities;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__GetServiceCapabilities(soap, &soap_tmp___ns10__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__GetServiceCapabilities(soap, &soap_tmp___ns10__GetServiceCapabilities, "-ns10:GetServiceCapabilities", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__GetServiceCapabilities(soap, &soap_tmp___ns10__GetServiceCapabilities, "-ns10:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	ns10__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__GetServiceCapabilitiesResponse->soap_get(soap, "ns10:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::PanMove(const char *endpoint, const char *soap_action, _ns10__PanMove *ns10__PanMove, _ns10__PanMoveResponse *ns10__PanMoveResponse)
{	struct soap *soap = this->soap;
	struct __ns10__PanMove soap_tmp___ns10__PanMove;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/PanMove";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__PanMove.ns10__PanMove = ns10__PanMove;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__PanMove(soap, &soap_tmp___ns10__PanMove);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__PanMove(soap, &soap_tmp___ns10__PanMove, "-ns10:PanMove", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__PanMove(soap, &soap_tmp___ns10__PanMove, "-ns10:PanMove", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__PanMoveResponse)
		return soap_closesock(soap);
	ns10__PanMoveResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__PanMoveResponse->soap_get(soap, "ns10:PanMoveResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::TiltMove(const char *endpoint, const char *soap_action, _ns10__TiltMove *ns10__TiltMove, _ns10__TiltMoveResponse *ns10__TiltMoveResponse)
{	struct soap *soap = this->soap;
	struct __ns10__TiltMove soap_tmp___ns10__TiltMove;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/TiltMove";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__TiltMove.ns10__TiltMove = ns10__TiltMove;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__TiltMove(soap, &soap_tmp___ns10__TiltMove);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__TiltMove(soap, &soap_tmp___ns10__TiltMove, "-ns10:TiltMove", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__TiltMove(soap, &soap_tmp___ns10__TiltMove, "-ns10:TiltMove", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__TiltMoveResponse)
		return soap_closesock(soap);
	ns10__TiltMoveResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__TiltMoveResponse->soap_get(soap, "ns10:TiltMoveResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::ZoomMove(const char *endpoint, const char *soap_action, _ns10__ZoomMove *ns10__ZoomMove, _ns10__ZoomMoveResponse *ns10__ZoomMoveResponse)
{	struct soap *soap = this->soap;
	struct __ns10__ZoomMove soap_tmp___ns10__ZoomMove;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/ZoomMove";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__ZoomMove.ns10__ZoomMove = ns10__ZoomMove;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__ZoomMove(soap, &soap_tmp___ns10__ZoomMove);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__ZoomMove(soap, &soap_tmp___ns10__ZoomMove, "-ns10:ZoomMove", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__ZoomMove(soap, &soap_tmp___ns10__ZoomMove, "-ns10:ZoomMove", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__ZoomMoveResponse)
		return soap_closesock(soap);
	ns10__ZoomMoveResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__ZoomMoveResponse->soap_get(soap, "ns10:ZoomMoveResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::RollMove(const char *endpoint, const char *soap_action, _ns10__RollMove *ns10__RollMove, _ns10__RollMoveResponse *ns10__RollMoveResponse)
{	struct soap *soap = this->soap;
	struct __ns10__RollMove soap_tmp___ns10__RollMove;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/RollMove";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__RollMove.ns10__RollMove = ns10__RollMove;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__RollMove(soap, &soap_tmp___ns10__RollMove);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__RollMove(soap, &soap_tmp___ns10__RollMove, "-ns10:RollMove", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__RollMove(soap, &soap_tmp___ns10__RollMove, "-ns10:RollMove", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__RollMoveResponse)
		return soap_closesock(soap);
	ns10__RollMoveResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__RollMoveResponse->soap_get(soap, "ns10:RollMoveResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::FocusMove(const char *endpoint, const char *soap_action, _ns10__FocusMove *ns10__FocusMove, _ns10__FocusMoveResponse *ns10__FocusMoveResponse)
{	struct soap *soap = this->soap;
	struct __ns10__FocusMove soap_tmp___ns10__FocusMove;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/FocusMove";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__FocusMove.ns10__FocusMove = ns10__FocusMove;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__FocusMove(soap, &soap_tmp___ns10__FocusMove);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__FocusMove(soap, &soap_tmp___ns10__FocusMove, "-ns10:FocusMove", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__FocusMove(soap, &soap_tmp___ns10__FocusMove, "-ns10:FocusMove", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__FocusMoveResponse)
		return soap_closesock(soap);
	ns10__FocusMoveResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__FocusMoveResponse->soap_get(soap, "ns10:FocusMoveResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::Stop(const char *endpoint, const char *soap_action, _ns10__Stop *ns10__Stop, _ns10__StopResponse *ns10__StopResponse)
{	struct soap *soap = this->soap;
	struct __ns10__Stop soap_tmp___ns10__Stop;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/Stop";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__Stop.ns10__Stop = ns10__Stop;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__Stop(soap, &soap_tmp___ns10__Stop);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__Stop(soap, &soap_tmp___ns10__Stop, "-ns10:Stop", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__Stop(soap, &soap_tmp___ns10__Stop, "-ns10:Stop", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__StopResponse)
		return soap_closesock(soap);
	ns10__StopResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__StopResponse->soap_get(soap, "ns10:StopResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ProvisioningBindingProxy::GetUsage(const char *endpoint, const char *soap_action, _ns10__GetUsage *ns10__GetUsage, _ns10__GetUsageResponse *ns10__GetUsageResponse)
{	struct soap *soap = this->soap;
	struct __ns10__GetUsage soap_tmp___ns10__GetUsage;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/provisioning/wsdl/Usage";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns10__GetUsage.ns10__GetUsage = ns10__GetUsage;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns10__GetUsage(soap, &soap_tmp___ns10__GetUsage);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__GetUsage(soap, &soap_tmp___ns10__GetUsage, "-ns10:GetUsage", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__GetUsage(soap, &soap_tmp___ns10__GetUsage, "-ns10:GetUsage", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns10__GetUsageResponse)
		return soap_closesock(soap);
	ns10__GetUsageResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns10__GetUsageResponse->soap_get(soap, "ns10:GetUsageResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
