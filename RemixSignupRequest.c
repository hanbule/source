

void __fastcall RemixSignupRequest::onComplete(RemixSignupRequest *this)
{
  RemixSignupRequest *v1; // r4@1
  signed int v2; // r6@2
  void (__fastcall *v3)(char *, signed int, char **); // r3@6
  char *v4; // r0@6
  char *v5; // r0@7
  void (__fastcall *v6)(char *, char *, signed int); // r3@8
  unsigned int *v7; // r2@11
  signed int v8; // r1@13
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  char *v11; // [sp+0h] [bp-28h]@5
  char *v12; // [sp+8h] [bp-20h]@6

  v1 = this;
  if ( *((_DWORD *)this + 17) )
  {
    v2 = 5;
    *((_DWORD *)this + 17) = 5;
  }
  else
    v2 = 0;
  if ( *((_DWORD *)this + 20) )
    sub_119C854((int *)&v11, (int *)this + 22);
    if ( !*((_DWORD *)v1 + 20) )
      sub_119C8E4();
    v3 = (void (__fastcall *)(char *, signed int, char **))*((_DWORD *)v1 + 21);
    v12 = v11;
    v11 = (char *)&unk_28898CC;
    v3((char *)v1 + 72, v2, &v12);
    v4 = v12 - 12;
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
    v5 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    v6 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 20);
    if ( v6 )
      v6((char *)v1 + 72, (char *)v1 + 72, 3);
      *((_DWORD *)v1 + 20) = 0;
      *((_DWORD *)v1 + 21) = 0;
}


void __fastcall RemixSignupRequest::~RemixSignupRequest(RemixSignupRequest *this)
{
  RemixSignupRequest::~RemixSignupRequest(this);
}


RemixSignupRequest *__fastcall RemixSignupRequest::~RemixSignupRequest(RemixSignupRequest *this)
{
  RemixSignupRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DE32C;
  v2 = *((_DWORD *)this + 22);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26DE14C;
  v5 = *((_DWORD *)v1 + 16);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  RequestHandler::~RequestHandler(v1);
  return v1;
}


void __fastcall RemixSignupRequest::send(RemixSignupRequest *this)
{
  RemixSignupRequest::send(this);
}


void __fastcall RemixSignupRequest::~RemixSignupRequest(RemixSignupRequest *this)
{
  RemixSignupRequest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DE32C;
  v2 = *((_DWORD *)this + 22);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26DE14C;
  v5 = *((_DWORD *)v1 + 16);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  RequestHandler::~RequestHandler(v1);
  operator delete((void *)v1);
}


void __fastcall RemixSignupRequest::send(RemixSignupRequest *this)
{
  RemixSignupRequest *v1; // r5@1
  char v2; // r0@1
  int *v3; // r0@4
  void *v4; // r0@4
  __int64 v5; // r0@6
  int v6; // r6@6
  unsigned int *v7; // r1@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r5@13
  unsigned int v10; // r0@15
  int v11; // r5@20
  unsigned int *v12; // r1@21
  unsigned int v13; // r0@23
  unsigned int *v14; // r6@27
  unsigned int v15; // r0@29
  int v16; // r5@34
  unsigned int *v17; // r1@35
  unsigned int v18; // r0@37
  unsigned int *v19; // r6@41
  unsigned int v20; // r0@43
  void *v21; // r0@48
  int v22; // r4@49
  unsigned int *v23; // r1@50
  unsigned int v24; // r0@52
  unsigned int *v25; // r5@56
  unsigned int v26; // r0@58
  unsigned int *v27; // r2@64
  signed int v28; // r1@66
  unsigned int *v29; // r2@68
  signed int v30; // r1@70
  int v31; // [sp+0h] [bp-58h]@5
  int v32; // [sp+4h] [bp-54h]@5
  char v33; // [sp+8h] [bp-50h]@5
  int v34; // [sp+Ch] [bp-4Ch]@6
  int v35; // [sp+10h] [bp-48h]@4
  int v36; // [sp+14h] [bp-44h]@4
  int v37; // [sp+18h] [bp-40h]@48
  int v38; // [sp+34h] [bp-24h]@4
  int v39; // [sp+38h] [bp-20h]@5

  v1 = this;
  v2 = byte_27D43C8;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D43C8) )
  {
    sub_119C884((void **)algn_27D43C4, "users?partnerToHydrateFrom=Social");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_27D43C8);
  }
  v3 = (int *)RemixService::getAPIEndpoint(*((RemixService **)v1 + 15));
  j__ZNSt12__shared_ptrI11RequestDataLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRKSsS7_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v38,
    (int)&v36,
    v3,
    (int *)&web::http::methods::POST);
  utility::conversions::to_string_t(&v35, (int *)algn_27D43C4);
  web::uri::uri((int)&v36, &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  web::http::details::_http_request::set_request_uri(
    *(web::http::details::_http_request **)(v38 + 12),
    (const web::uri *)&v36);
  v31 = v38;
  v32 = v39;
  v38 = 0;
  v39 = 0;
  RemixRequest::_sendRequest((int)&v33, (int)v1, (int)&v31);
  if ( (char *)v1 + 44 != &v33 )
    v5 = *(_QWORD *)&v33;
    *(_DWORD *)&v33 = 0;
    v34 = 0;
    *((_DWORD *)v1 + 11) = v5;
    v6 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v5);
    if ( v6 )
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v11 = v34;
  if ( v34 )
    v12 = (unsigned int *)(v34 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v16 = v32;
  if ( v32 )
    v17 = (unsigned int *)(v32 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v37);
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v39;
  if ( v39 )
    v23 = (unsigned int *)(v39 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
}


void __fastcall RemixSignupRequest::onComplete(RemixSignupRequest *this)
{
  RemixSignupRequest::onComplete(this);
}


RemixRequest *__fastcall RemixSignupRequest::RemixSignupRequest(RemixRequest *a1, const RemixService *a2, int a3)
{
  int v3; // r5@1
  RemixRequest *v4; // r4@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1

  v3 = a3;
  v4 = a1;
  RemixRequest::RemixRequest(a1, a2);
  *(_DWORD *)v4 = &off_26DE32C;
  *((_DWORD *)v4 + 20) = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v5 )
  {
    v5((char *)v4 + 72, v3, 2);
    *((_DWORD *)v4 + 21) = *(_DWORD *)(v3 + 12);
    *((_DWORD *)v4 + 20) = *(_DWORD *)(v3 + 8);
  }
  *((_DWORD *)v4 + 22) = &unk_28898CC;
  return v4;
}
