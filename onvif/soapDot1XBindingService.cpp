/* soapDot1XBindingService.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapDot1XBindingService.h"

Dot1XBindingService::Dot1XBindingService()
{	this->soap = soap_new();
	this->own = true;
	Dot1XBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

Dot1XBindingService::Dot1XBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	Dot1XBindingService_init(_soap->imode, _soap->omode);
}

Dot1XBindingService::Dot1XBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	Dot1XBindingService_init(iomode, iomode);
}

Dot1XBindingService::Dot1XBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	Dot1XBindingService_init(imode, omode);
}

Dot1XBindingService::~Dot1XBindingService()
{	if (this->own)
		soap_free(this->soap);
}

void Dot1XBindingService::Dot1XBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
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

void Dot1XBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void Dot1XBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	Dot1XBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
Dot1XBindingService *Dot1XBindingService::copy()
{	Dot1XBindingService *dup = SOAP_NEW_COPY(Dot1XBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int Dot1XBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int Dot1XBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int Dot1XBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int Dot1XBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int Dot1XBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int Dot1XBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void Dot1XBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void Dot1XBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *Dot1XBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void Dot1XBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void Dot1XBindingService::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *Dot1XBindingService::soap_header()
{	return this->soap->header;
}

int Dot1XBindingService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->soap->error;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	else
		return this->soap->error;
	return SOAP_OK;
}

SOAP_SOCKET Dot1XBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET Dot1XBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int Dot1XBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int Dot1XBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___name4__AddDot1XConfiguration(Dot1XBindingService*);
static int serve___name4__GetAllDot1XConfigurations(Dot1XBindingService*);
static int serve___name4__GetDot1XConfiguration(Dot1XBindingService*);
static int serve___name4__DeleteDot1XConfiguration(Dot1XBindingService*);
static int serve___name4__SetNetworkInterfaceDot1XConfiguration(Dot1XBindingService*);
static int serve___name4__GetNetworkInterfaceDot1XConfiguration(Dot1XBindingService*);
static int serve___name4__DeleteNetworkInterfaceDot1XConfiguration(Dot1XBindingService*);

int Dot1XBindingService::dispatch()
{	Dot1XBindingService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:AddDot1XConfiguration"))
		return serve___name4__AddDot1XConfiguration(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetAllDot1XConfigurations"))
		return serve___name4__GetAllDot1XConfigurations(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetDot1XConfiguration"))
		return serve___name4__GetDot1XConfiguration(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:DeleteDot1XConfiguration"))
		return serve___name4__DeleteDot1XConfiguration(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:SetNetworkInterfaceDot1XConfiguration"))
		return serve___name4__SetNetworkInterfaceDot1XConfiguration(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetNetworkInterfaceDot1XConfiguration"))
		return serve___name4__GetNetworkInterfaceDot1XConfiguration(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:DeleteNetworkInterfaceDot1XConfiguration"))
		return serve___name4__DeleteNetworkInterfaceDot1XConfiguration(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___name4__AddDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__AddDot1XConfiguration soap_tmp___name4__AddDot1XConfiguration;
	_ns5__AddDot1XConfigurationResponse ns5__AddDot1XConfigurationResponse;
	ns5__AddDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__AddDot1XConfiguration(soap, &soap_tmp___name4__AddDot1XConfiguration);
	if (!soap_get___name4__AddDot1XConfiguration(soap, &soap_tmp___name4__AddDot1XConfiguration, "-name4:AddDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->AddDot1XConfiguration(soap_tmp___name4__AddDot1XConfiguration.ns5__AddDot1XConfiguration, &ns5__AddDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__AddDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__AddDot1XConfigurationResponse.soap_put(soap, "ns5:AddDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__AddDot1XConfigurationResponse.soap_put(soap, "ns5:AddDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__GetAllDot1XConfigurations(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__GetAllDot1XConfigurations soap_tmp___name4__GetAllDot1XConfigurations;
	_ns5__GetAllDot1XConfigurationsResponse ns5__GetAllDot1XConfigurationsResponse;
	ns5__GetAllDot1XConfigurationsResponse.soap_default(soap);
	soap_default___name4__GetAllDot1XConfigurations(soap, &soap_tmp___name4__GetAllDot1XConfigurations);
	if (!soap_get___name4__GetAllDot1XConfigurations(soap, &soap_tmp___name4__GetAllDot1XConfigurations, "-name4:GetAllDot1XConfigurations", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAllDot1XConfigurations(soap_tmp___name4__GetAllDot1XConfigurations.ns5__GetAllDot1XConfigurations, &ns5__GetAllDot1XConfigurationsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetAllDot1XConfigurationsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetAllDot1XConfigurationsResponse.soap_put(soap, "ns5:GetAllDot1XConfigurationsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetAllDot1XConfigurationsResponse.soap_put(soap, "ns5:GetAllDot1XConfigurationsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__GetDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__GetDot1XConfiguration soap_tmp___name4__GetDot1XConfiguration;
	_ns5__GetDot1XConfigurationResponse ns5__GetDot1XConfigurationResponse;
	ns5__GetDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__GetDot1XConfiguration(soap, &soap_tmp___name4__GetDot1XConfiguration);
	if (!soap_get___name4__GetDot1XConfiguration(soap, &soap_tmp___name4__GetDot1XConfiguration, "-name4:GetDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetDot1XConfiguration(soap_tmp___name4__GetDot1XConfiguration.ns5__GetDot1XConfiguration, &ns5__GetDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetDot1XConfigurationResponse.soap_put(soap, "ns5:GetDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetDot1XConfigurationResponse.soap_put(soap, "ns5:GetDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__DeleteDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__DeleteDot1XConfiguration soap_tmp___name4__DeleteDot1XConfiguration;
	_ns5__DeleteDot1XConfigurationResponse ns5__DeleteDot1XConfigurationResponse;
	ns5__DeleteDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__DeleteDot1XConfiguration(soap, &soap_tmp___name4__DeleteDot1XConfiguration);
	if (!soap_get___name4__DeleteDot1XConfiguration(soap, &soap_tmp___name4__DeleteDot1XConfiguration, "-name4:DeleteDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeleteDot1XConfiguration(soap_tmp___name4__DeleteDot1XConfiguration.ns5__DeleteDot1XConfiguration, &ns5__DeleteDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__DeleteDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__DeleteDot1XConfigurationResponse.soap_put(soap, "ns5:DeleteDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__DeleteDot1XConfigurationResponse.soap_put(soap, "ns5:DeleteDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__SetNetworkInterfaceDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__SetNetworkInterfaceDot1XConfiguration soap_tmp___name4__SetNetworkInterfaceDot1XConfiguration;
	_ns5__SetNetworkInterfaceDot1XConfigurationResponse ns5__SetNetworkInterfaceDot1XConfigurationResponse;
	ns5__SetNetworkInterfaceDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__SetNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__SetNetworkInterfaceDot1XConfiguration);
	if (!soap_get___name4__SetNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__SetNetworkInterfaceDot1XConfiguration, "-name4:SetNetworkInterfaceDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetNetworkInterfaceDot1XConfiguration(soap_tmp___name4__SetNetworkInterfaceDot1XConfiguration.ns5__SetNetworkInterfaceDot1XConfiguration, &ns5__SetNetworkInterfaceDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__SetNetworkInterfaceDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__SetNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:SetNetworkInterfaceDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__SetNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:SetNetworkInterfaceDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__GetNetworkInterfaceDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__GetNetworkInterfaceDot1XConfiguration soap_tmp___name4__GetNetworkInterfaceDot1XConfiguration;
	_ns5__GetNetworkInterfaceDot1XConfigurationResponse ns5__GetNetworkInterfaceDot1XConfigurationResponse;
	ns5__GetNetworkInterfaceDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__GetNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__GetNetworkInterfaceDot1XConfiguration);
	if (!soap_get___name4__GetNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__GetNetworkInterfaceDot1XConfiguration, "-name4:GetNetworkInterfaceDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetNetworkInterfaceDot1XConfiguration(soap_tmp___name4__GetNetworkInterfaceDot1XConfiguration.ns5__GetNetworkInterfaceDot1XConfiguration, &ns5__GetNetworkInterfaceDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetNetworkInterfaceDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:GetNetworkInterfaceDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:GetNetworkInterfaceDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name4__DeleteNetworkInterfaceDot1XConfiguration(Dot1XBindingService *service)
{	struct soap *soap = service->soap;
	struct __name4__DeleteNetworkInterfaceDot1XConfiguration soap_tmp___name4__DeleteNetworkInterfaceDot1XConfiguration;
	_ns5__DeleteNetworkInterfaceDot1XConfigurationResponse ns5__DeleteNetworkInterfaceDot1XConfigurationResponse;
	ns5__DeleteNetworkInterfaceDot1XConfigurationResponse.soap_default(soap);
	soap_default___name4__DeleteNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__DeleteNetworkInterfaceDot1XConfiguration);
	if (!soap_get___name4__DeleteNetworkInterfaceDot1XConfiguration(soap, &soap_tmp___name4__DeleteNetworkInterfaceDot1XConfiguration, "-name4:DeleteNetworkInterfaceDot1XConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeleteNetworkInterfaceDot1XConfiguration(soap_tmp___name4__DeleteNetworkInterfaceDot1XConfiguration.ns5__DeleteNetworkInterfaceDot1XConfiguration, &ns5__DeleteNetworkInterfaceDot1XConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__DeleteNetworkInterfaceDot1XConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__DeleteNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:DeleteNetworkInterfaceDot1XConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__DeleteNetworkInterfaceDot1XConfigurationResponse.soap_put(soap, "ns5:DeleteNetworkInterfaceDot1XConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */