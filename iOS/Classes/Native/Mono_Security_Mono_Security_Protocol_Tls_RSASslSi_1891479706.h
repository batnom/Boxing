﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1335394806_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1165206268_0;

#include "mscorlib_System_Security_Cryptography_AsymmetricS_1940221401.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t_1891479706_0  : public AsymmetricSignatureFormatter_t_1940221401_0
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t_1501125859_0 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t_1335394806_0 * ___hash_1;
};
struct RSASslSignatureFormatter_t_1891479706_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t1165206268_0 * ___U3CU3Ef__switchU24map16_2;
};