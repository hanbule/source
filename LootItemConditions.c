

signed int __fastcall LootItemConditions::allApply(__int64 *a1)
{
  __int64 v1; // r6@1
  int v2; // t1@2
  signed int result; // r0@4

  v1 = *a1;
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
LABEL_4:
    result = 1;
  }
  else
    while ( 1 )
    {
      v2 = *(_DWORD *)v1;
      LODWORD(v1) = v1 + 4;
      if ( !(*(int (**)(void))(*(_DWORD *)v2 + 8))() )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        goto LABEL_4;
    }
    result = 0;
  return result;
}


signed int __fastcall LootItemConditions::deserialize(int a1, Json::Value *a2)
{
  int v2; // r4@1
  Json::Value *v3; // r5@1
  signed int result; // r0@1
  const Json::Value *v5; // r0@4
  int v6; // r0@4
  int *v7; // r1@5 OVERLAPPED
  int *v8; // r2@5
  int v9; // [sp+0h] [bp-40h]@4
  int v10; // [sp+10h] [bp-30h]@4
  char v11; // [sp+14h] [bp-2Ch]@2
  char v12; // [sp+1Ch] [bp-24h]@2

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  result = j_Json::Value::isNull(a2);
  if ( !result )
  {
    j_Json::Value::begin((Json::Value *)&v12, (int)v3);
    j_Json::Value::end((Json::Value *)&v11, (int)v3);
    while ( 1 )
    {
      result = j_Json::ValueIteratorBase::isEqual(
                 (Json::ValueIteratorBase *)&v12,
                 (const Json::ValueIteratorBase *)&v11);
      if ( result == 1 )
        break;
      v5 = (const Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v12);
      j_Json::Value::Value((Json::Value *)&v9, v5);
      j_LootItemCondition::deserialize(&v10, (Json::Value *)&v9);
      j_Json::Value::~Value((Json::Value *)&v9);
      v6 = v10;
      if ( v10 )
      {
        *(_QWORD *)&v7 = *(_QWORD *)(v2 + 4);
        if ( v7 == v8 )
        {
          j_std::vector<std::unique_ptr<LootItemCondition,std::default_delete<LootItemCondition>>,std::allocator<std::unique_ptr<LootItemCondition,std::default_delete<LootItemCondition>>>>::_M_emplace_back_aux<std::unique_ptr<LootItemCondition,std::default_delete<LootItemCondition>>>(
            (_QWORD *)v2,
            &v10);
        }
        else
          v10 = 0;
          *v7 = v6;
          *(_DWORD *)(v2 + 4) = v7 + 1;
        if ( v10 )
          (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      }
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v12);
    }
  }
  return result;
}
