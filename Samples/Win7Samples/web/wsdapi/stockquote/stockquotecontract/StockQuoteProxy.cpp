// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT MODIFY IT BY HAND.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <LiteralInclude>
#include <wsdapi.h>
// </LiteralInclude>

// <LiteralInclude>
#include "StockQuote.h"
// </LiteralInclude>

// <LiteralInclude>
#include "StockQuoteTypes.h"
// </LiteralInclude>

// <LiteralInclude>
#include "StockQuoteProxy.h"
// </LiteralInclude>

// <ProxyBuilderImplementations>
HRESULT CreateCStockQuoteProxy(
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszLocalAddress,
                CStockQuoteProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut)
{
    HRESULT hr = S_OK;
    IWSDXMLContext* pContext = NULL;
    IWSDDeviceProxy* pDeviceProxy = NULL;
    IWSDServiceProxy* pServiceProxy = NULL;
    CStockQuoteProxy* pProxy = NULL;

    // 
    // Validate parameters
    // 
    if( NULL == pszDeviceAddress )
    {
        return E_INVALIDARG;
    }

    if( NULL == pszLocalAddress )
    {
        return E_INVALIDARG;
    }

    if( NULL == ppProxyOut )
    {
        return E_POINTER;
    }

    // ppContextOut is optional

    *ppProxyOut = NULL;
    if( NULL != ppContextOut )
    {
        *ppContextOut = NULL;
    }

    // 
    // Create XML context for namespace and type registration
    // 
    hr = WSDXMLCreateContext(&pContext);

    // 
    // Register types used by the service
    // 
    if( S_OK == hr )
    {
        hr = StockQuoteRegisterTypes(pContext);
    }

    // 
    // Register namespaces used by the service
    // 
    if( S_OK == hr )
    {
        hr = StockQuoteRegisterNamespaces(pContext);
    }

    // 
    // Create a proxy for the device host
    // 
    if( S_OK == hr )
    {
        hr = WSDCreateDeviceProxy(pszDeviceAddress, pszLocalAddress, pContext, &pDeviceProxy);
    }

    // 
    // Create a proxy for the service
    // 
    if( S_OK == hr )
    {
        hr = pDeviceProxy->GetServiceProxyByType(&Names_Definitions[0], &pServiceProxy);
    }

    // 
    // Create a proxy for the port type
    // 
    if( S_OK == hr )
    {
        pProxy = new CStockQuoteProxy();
        if( NULL == pProxy )
        {
            hr = E_OUTOFMEMORY;
        }
    }

    if( S_OK == hr )
    {
        hr = pProxy->Init(pServiceProxy);
    }

    // 
    // Cleanup
    // 
    if( NULL != pServiceProxy )
    {
        pServiceProxy->Release();
    }

    if( NULL != pDeviceProxy )
    {
        pDeviceProxy->Release();
    }

    if( S_OK == hr && ppContextOut )
    {
        *ppContextOut = pContext;
    }
    else
    {
        if( NULL != pContext )
        {
            pContext->Release();
        }
    }

    if( S_OK == hr )
    {
        *ppProxyOut = pProxy;
    }
    else
    {
        if( NULL != pProxy )
        {
            pProxy->Release();
        }
    }

    return hr;
}

HRESULT CreateCStockQuoteProxyById(
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszServiceId,
                LPCWSTR pszLocalAddress,
                CStockQuoteProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut)
{
    HRESULT hr = S_OK;
    IWSDXMLContext* pContext = NULL;
    IWSDDeviceProxy* pDeviceProxy = NULL;
    IWSDServiceProxy* pServiceProxy = NULL;
    CStockQuoteProxy* pProxy = NULL;

    // 
    // Validate parameters
    // 
    if( NULL == pszDeviceAddress )
    {
        return E_INVALIDARG;
    }

    if( NULL == pszServiceId )
    {
        return E_INVALIDARG;
    }

    if( NULL == pszLocalAddress )
    {
        return E_INVALIDARG;
    }

    if( NULL == ppProxyOut )
    {
        return E_POINTER;
    }

    // ppContextOut is optional

    *ppProxyOut = NULL;
    if( NULL != ppContextOut )
    {
        *ppContextOut = NULL;
    }

    // 
    // Create XML context for namespace and type registration
    // 
    hr = WSDXMLCreateContext(&pContext);

    // 
    // Register types used by the service
    // 
    if( S_OK == hr )
    {
        hr = StockQuoteRegisterTypes(pContext);
    }

    // 
    // Register namespaces used by the service
    // 
    if( S_OK == hr )
    {
        hr = StockQuoteRegisterNamespaces(pContext);
    }

    // 
    // Create a proxy for the device host
    // 
    if( S_OK == hr )
    {
        hr = WSDCreateDeviceProxy(pszDeviceAddress, pszLocalAddress, pContext, &pDeviceProxy);
    }

    // 
    // Create a proxy for the service
    // 
    if( S_OK == hr )
    {
        hr = pDeviceProxy->GetServiceProxyById(pszServiceId, &pServiceProxy);
    }

    // 
    // Create a proxy for the port type
    // 
    if( S_OK == hr )
    {
        pProxy = new CStockQuoteProxy();
        if( NULL == pProxy )
        {
            hr = E_OUTOFMEMORY;
        }
    }

    if( S_OK == hr )
    {
        hr = pProxy->Init(pServiceProxy);
    }

    // 
    // Cleanup
    // 
    if( NULL != pServiceProxy )
    {
        pServiceProxy->Release();
    }

    if( NULL != pDeviceProxy )
    {
        pDeviceProxy->Release();
    }

    if( S_OK == hr && ppContextOut )
    {
        *ppContextOut = pContext;
    }
    else
    {
        if( NULL != pContext )
        {
            pContext->Release();
        }
    }

    if( S_OK == hr )
    {
        *ppProxyOut = pProxy;
    }
    else
    {
        if( NULL != pProxy )
        {
            pProxy->Release();
        }
    }

    return hr;
}

// </ProxyBuilderImplementations>

// <CDATA>

CStockQuoteProxy::CStockQuoteProxy() :
    m_cRef(1), m_genericProxy(NULL)
{
}

CStockQuoteProxy::~CStockQuoteProxy() 
{
    if ( NULL != m_genericProxy )
    {
        m_genericProxy->Release();
        m_genericProxy = NULL;
    }
};

HRESULT STDMETHODCALLTYPE CStockQuoteProxy::Init(
    /* [in] */ IWSDServiceProxy* pIWSDServiceProxy )
{
    if( NULL == pIWSDServiceProxy )
    {
        return E_INVALIDARG;
    }

    m_genericProxy = pIWSDServiceProxy;
    m_genericProxy->AddRef();

    return S_OK;
}

// </CDATA>

// <IUnknownDefinitions>
HRESULT STDMETHODCALLTYPE CStockQuoteProxy::QueryInterface(REFIID riid, void **ppvObject)
{
    if (NULL == ppvObject)
    {
        return E_POINTER;
    }

    HRESULT hr = S_OK;
    *ppvObject = NULL;

    if (__uuidof(IUnknown) == riid)
    {
        *ppvObject = (IUnknown *)this;
    }
    else if (__uuidof(IStockQuote) == riid)
    {
        *ppvObject = (IStockQuote *)this;
    }
    else if (__uuidof(IStockQuoteProxy) == riid)
    {
        *ppvObject = (IStockQuoteProxy *)this;
    }
    else
    {
        hr = E_NOINTERFACE;
    }

    if (SUCCEEDED(hr))
    {
        ((LPUNKNOWN)*ppvObject)->AddRef();
    }

    return hr;
}

ULONG STDMETHODCALLTYPE CStockQuoteProxy::AddRef()
{
    ULONG ulNewRefCount = (ULONG)InterlockedIncrement((LONG *)&m_cRef);
    return ulNewRefCount;
}

ULONG STDMETHODCALLTYPE CStockQuoteProxy::Release()
{
    ULONG ulNewRefCount = (ULONG)InterlockedDecrement((LONG *)&m_cRef);

    if (0 == ulNewRefCount)
    {
        delete this;
    }

    return ulNewRefCount;
}
// </IUnknownDefinitions>

// <ProxyFunctionImplementations>
HRESULT STDMETHODCALLTYPE
CStockQuoteProxy::GetLastTradePrice
(   /* [in] */ TRADE_PRICE_REQUEST* body
,   /* [out] */ TRADE_PRICE** bodyOut
)
{
    HRESULT hr = S_OK;

    // Initialize Output Pointers
    if( NULL != bodyOut )
    {
        *bodyOut = NULL;
    }

    // Validate Request Parameters
    if( NULL == body )
    {
        hr = E_INVALIDARG;
        return hr;
    }

    // Validate Response Parameters
    if( NULL == bodyOut )
    {
        hr = E_POINTER;
        return hr;
    }

    REQUESTBODY_StockQuotePortType_GetLastTradePrice request;

    request.body = body;

    if( NULL == m_genericProxy )
    {
        hr = E_ABORT;
        return hr;
    }

    IWSDEndpointProxy* ep = NULL;
    hr = m_genericProxy->GetEndpointProxy(&ep);
    if( FAILED(hr) || NULL == ep )
    {
        hr = E_ABORT;
        return hr;
    }

    WSD_SYNCHRONOUS_RESPONSE_CONTEXT context;
    ::ZeroMemory(&context, sizeof(context));
    context.eventHandle = ::CreateEvent(NULL, FALSE, FALSE, NULL);
    if (NULL == context.eventHandle)
    {
        DWORD dw = ::GetLastError();
        hr = HRESULT_FROM_WIN32(dw);
        ep->Release();
        return hr;
    }
    hr = 
        ep->SendTwoWayRequest
        (   &request
        ,   &Operations_StockQuotePortType[0]
        ,   &context
        );

    if (SUCCEEDED(hr))
    {
        if ( WAIT_FAILED == ::WaitForSingleObject(context.eventHandle, INFINITE) )
        {
             DWORD dw = ::GetLastError();
             hr = HRESULT_FROM_WIN32(dw);
        }
    }

    ::CloseHandle(context.eventHandle);
    context.eventHandle = NULL;

    if (SUCCEEDED(hr))
    {
        if (SUCCEEDED(context.hr))
        {
            if( NULL != context.results )
            {
                RESPONSEBODY_StockQuotePortType_GetLastTradePrice* response = reinterpret_cast<RESPONSEBODY_StockQuotePortType_GetLastTradePrice*>(context.results);

                WSDDetachLinkedMemory( (void*) response->body );
                *bodyOut = response->body;

                WSDFreeLinkedMemory( context.results );
                context.results = NULL;
            }
            else
            {
                hr = E_FAIL;
            }
        }
        else
        {
            hr = context.hr;
            if( context.results )
            {
                ep->ProcessFault( (const WSD_SOAP_FAULT*)context.results );
            }
        }
    }

    if ( NULL != context.messageParameters )
    {
        context.messageParameters->Release();
        context.messageParameters = NULL;
    }

    ep->Release();
    return hr;
}

// </ProxyFunctionImplementations>

// <ProxyFunctionImplementations>
HRESULT STDMETHODCALLTYPE
CStockQuoteProxy::BeginGetLastTradePrice
(   /* [in] */ TRADE_PRICE_REQUEST* body
,   /* [in] */ IUnknown* AsyncState
,   /* [in] */ IWSDAsyncCallback* AsyncCallback
,   /* [out] */ IWSDAsyncResult** AsyncResultOut
)
{
    HRESULT hr = S_OK;

    // Initialize Output Pointers
    if( NULL != AsyncResultOut )
    {
        *AsyncResultOut = NULL;
    }

    // Validate Request Parameters
    if( NULL == body )
    {
        hr = E_INVALIDARG;
        return hr;
    }

    REQUESTBODY_StockQuotePortType_GetLastTradePrice request;

    request.body = body;

    if( NULL == m_genericProxy )
    {
        hr = E_ABORT;
        return hr;
    }

    IWSDEndpointProxy* ep = NULL;
    hr = m_genericProxy->GetEndpointProxy(&ep);
    if( FAILED(hr) || NULL == ep )
    {
        hr = E_ABORT;
        return hr;
    }

    hr = 
        ep->SendTwoWayRequestAsync
        (   &request
        ,   &Operations_StockQuotePortType[0]
        ,   AsyncState
        ,   AsyncCallback
        ,   AsyncResultOut
        );

    ep->Release();
    return hr;
}

HRESULT STDMETHODCALLTYPE
CStockQuoteProxy::EndGetLastTradePrice
(   /* [in] */ IWSDAsyncResult* AsyncResult
,   /* [out] */ TRADE_PRICE** bodyOut
)
{
    WSD_EVENT ev;
    HRESULT hr = S_OK;


    // Initialize Output Pointers
    if( NULL != bodyOut )
    {
        *bodyOut = NULL;
    }
    if( NULL == AsyncResult )
    {
        hr = E_INVALIDARG;
        return hr;
    }

    // Validate Response Parameters
    if( NULL == bodyOut )
    {
        hr = E_POINTER;
        return hr;
    }

    ::ZeroMemory(&ev, sizeof(ev));
    hr = AsyncResult->GetEvent( &ev );
    if( S_OK != hr )
    {
        return hr;
    }

    if( ev.EventType == WSDET_INCOMING_MESSAGE )
    {
        void* results = ev.Soap->Body;
        if( NULL != results )
        {
            RESPONSEBODY_StockQuotePortType_GetLastTradePrice* response = reinterpret_cast<RESPONSEBODY_StockQuotePortType_GetLastTradePrice*>(results);

            WSDDetachLinkedMemory( (void*) response->body );
            *bodyOut = response->body;

            WSDFreeLinkedMemory( (void*) response );
        }
    }
    else if( ev.EventType == WSDET_INCOMING_FAULT )
    {
        void* results = ev.Soap->Body;

        if( NULL == m_genericProxy )
        {
            hr = E_ABORT;
            return hr;
        }

        IWSDEndpointProxy* ep = NULL;
        hr = m_genericProxy->GetEndpointProxy(&ep);
        if( FAILED(hr) || NULL == ep )
        {
            hr = E_ABORT;
            return hr;
        }

        hr = E_FAIL;
        if( results )
        {
            ep->ProcessFault( (const WSD_SOAP_FAULT*)results );
        }
        ep->Release();
    }
    else
    {
        hr = ( (S_OK == ev.Hr) ? E_FAIL : ev.Hr );
    }

    return hr;
}

// </ProxyFunctionImplementations>
