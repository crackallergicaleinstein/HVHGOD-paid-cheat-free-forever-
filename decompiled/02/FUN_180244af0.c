// FUN_180244af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244af0 */

undefined8 FUN_180244af0(undefined8 param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  short sVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [64];
  float local_res20;
  float fStackX_24;
  
  auVar5 = ZEXT464((uint)(param_3 - param_2));
  sVar2 = thunk_FUN_180624430(param_3 - param_2);
  if (sVar2 < 1) {
    fVar3 = (float)FUN_180615070(auVar5._0_8_,0x43b40000);
  }
  else {
    fVar3 = 0.0;
  }
  fVar3 = (fVar3 * 3.1415927) / 180.0;
  auVar5 = ZEXT464((uint)fVar3);
  fVar3 = (float)FUN_180637540(fVar3);
  fVar4 = (float)FUN_180638e00(auVar5._0_8_);
  fStackX_24 = (float)((ulonglong)param_1 >> 0x20);
  local_res20 = (float)param_1;
  auVar1 = vunpcklps_avx(ZEXT416((uint)(fVar4 * fStackX_24 + fVar3 * local_res20)),
                         ZEXT416((uint)(fVar3 * fStackX_24 - fVar4 * local_res20)));
  return auVar1._0_8_;
}



