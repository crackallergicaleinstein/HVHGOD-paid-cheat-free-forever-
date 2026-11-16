// FUN_18016fd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016fd00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18016fd00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  HANDLE hHandle;
  char cVar10;
  DWORD DVar11;
  DWORD DVar12;
  HRESULT HVar13;
  int iVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *******_Buf1;
  undefined1 *_Buf2;
  longlong lVar19;
  longlong lVar18;
  undefined1 auStack_278 [32];
  undefined1 local_258 [16];
  size_t sStack_248;
  ulonglong uStack_240;
  undefined8 local_238;
  char local_230 [5];
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  undefined1 local_224;
  undefined1 local_223;
  undefined1 local_222;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined1 local_210;
  HANDLE local_208;
  undefined1 local_200 [24];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined8 *local_178 [2];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [56];
  GUID local_90;
  undefined1 local_80 [8];
  char local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined1 auStack_58 [16];
  undefined8 *******local_48;
  undefined8 uStack_40;
  size_t sStack_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  local_238 = local_238 & 0xffffffff00000000;
  local_208 = (HANDLE)FUN_180001930();
  if (((longlong)local_208 + 1U & 0xfffffffffffffffe) == 0) {
    DVar11 = FUN_180001910();
    local_208 = OpenProcess(0x100400,0,DVar11);
  }
  hHandle = local_208;
  if ((longlong)local_208 - 1U < 0xfffffffffffffffe) {
    DVar11 = GetProcessId(local_208);
    DVar12 = FUN_180001910();
    if (DVar11 == DVar12) {
      local_90.Data1 = 0;
      local_90.Data2 = 0;
      local_90.Data3 = 0;
      local_90.Data4[0] = '\0';
      local_90.Data4[1] = '\0';
      local_90.Data4[2] = '\0';
      local_90.Data4[3] = '\0';
      local_90.Data4[4] = '\0';
      local_90.Data4[5] = '\0';
      local_90.Data4[6] = '\0';
      local_90.Data4[7] = '\0';
      HVar13 = CoCreateGuid(&local_90);
      if (-1 < HVar13) {
        local_210 = 0;
        local_258[8] = '8';
        local_258[9] = '9';
        local_258[10] = 'a';
        local_258[0xb] = 'b';
        local_258[0xc] = 'c';
        local_258[0xd] = 'd';
        local_258[0xe] = 'e';
        local_258[0xf] = 'f';
        local_258[0] = '0';
        local_258[1] = '1';
        local_258[2] = '2';
        local_258[3] = '3';
        local_258[4] = '4';
        local_258[5] = '5';
        local_258[6] = '6';
        local_258[7] = '7';
        sStack_248 = sStack_248 & 0xffffffffffffff00;
        local_230[0] = local_258[(byte)local_90.Data1 >> 4];
        local_230[1] = local_258[(byte)local_90.Data1 & 0xf];
        local_230[2] = local_258[local_90.Data1._1_1_ >> 4];
        local_230[3] = local_258[local_90.Data1._1_1_ & 0xf];
        local_230[4] = local_258[local_90.Data1._2_1_ >> 4];
        local_22b = local_258[local_90.Data1._2_1_ & 0xf];
        local_22a = local_258[local_90.Data1._3_1_ >> 4];
        local_229 = local_258[local_90.Data1._3_1_ & 0xf];
        local_228 = local_258[(byte)local_90.Data2 >> 4];
        local_227 = local_258[(byte)local_90.Data2 & 0xf];
        local_226 = local_258[local_90.Data2._1_1_ >> 4];
        local_225 = local_258[local_90.Data2._1_1_ & 0xf];
        local_224 = local_258[(byte)local_90.Data3 >> 4];
        local_223 = local_258[(byte)local_90.Data3 & 0xf];
        local_222 = local_258[local_90.Data3._1_1_ >> 4];
        local_221 = local_258[local_90.Data3._1_1_ & 0xf];
        local_220 = local_258[local_90.Data4[0] >> 4];
        local_21f = local_258[local_90.Data4[0] & 0xf];
        local_21e = local_258[local_90.Data4[1] >> 4];
        local_21d = local_258[local_90.Data4[1] & 0xf];
        local_21c = local_258[local_90.Data4[2] >> 4];
        local_21b = local_258[local_90.Data4[2] & 0xf];
        local_21a = local_258[local_90.Data4[3] >> 4];
        local_219 = local_258[local_90.Data4[3] & 0xf];
        local_218 = local_258[local_90.Data4[4] >> 4];
        local_217 = local_258[local_90.Data4[4] & 0xf];
        local_216 = local_258[local_90.Data4[5] >> 4];
        local_215 = local_258[local_90.Data4[5] & 0xf];
        local_214 = local_258[local_90.Data4[6] >> 4];
        local_213 = local_258[local_90.Data4[6] & 0xf];
        local_212 = local_258[local_90.Data4[7] >> 4];
        local_211 = local_258[local_90.Data4[7] & 0xf];
        local_178[0] = &local_238;
        local_238 = 0;
        FUN_18015b360(local_168,param_1);
        FUN_18015b360(local_148,param_2);
        FUN_1800e60e0(local_f8,"action");
        FUN_1800e60e0(local_e0,"launch-proof");
        local_1c8 = local_f8;
        puStack_1c0 = local_c8;
        FUN_1800f4e90(local_1a8,&local_1c8,1,2);
        local_198 = 0;
        FUN_1800e60e0(local_200,"challenge");
        local_1c8 = local_1e8;
        local_1e8 = ZEXT816(0);
        FUN_1801409d0(local_1e8 + 8,0);
        local_1e8[0] = 3;
        local_258 = (undefined1  [16])0x0;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          local_68._8_8_ = 0x15;
          local_68._0_8_ = "tier0.dll:g_pMemAlloc";
          DAT_180c7df28 = (undefined8 *)FUN_180451750(local_68);
        }
        pauVar15 = (undefined1 (*) [16])
                   (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
        local_258._0_8_ = local_80;
        local_258._8_8_ = pauVar15;
        *pauVar15 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar15[1] = 0;
        *(undefined8 *)(pauVar15[1] + 8) = 0;
        lVar19 = -1;
        do {
          lVar9 = lVar19 + 1;
          lVar19 = lVar19 + 1;
        } while (local_230[lVar9] != '\0');
        FUN_18015ba30(pauVar15,local_230);
        local_1e8._8_8_ = pauVar15;
        local_1d8 = 0;
        local_258._0_8_ = local_200;
        local_258._8_8_ = local_1d0;
        FUN_1800f4e90(local_190,local_258,1,2);
        local_180 = 0;
        local_258._8_8_ = local_178;
        local_258._0_8_ = local_1a8;
        FUN_1800f4e90(local_128,local_258,1,2);
        local_108 = 0;
        uStack_100 = 7;
        local_118._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar1._14_2_ = 0;
        auVar1._0_14_ = local_118._2_14_;
        local_118 = auVar1 << 0x10;
        FUN_18016f430(local_78,local_168,&local_238,hHandle);
        FUN_18015b930(local_118);
        FUN_1801409d0(local_120,local_128[0]);
        FUN_18015c010(local_148);
        FUN_18015c010(local_168);
        _eh_vector_destructor_iterator_(local_1a8,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_200,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_f8,0x18,2,FUN_1800aab30);
        sStack_248 = 0;
        uStack_240 = 0xf;
        local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar2[0xf] = 0;
        auVar2._0_15_ = local_258._1_15_;
        local_258 = auVar2 << 8;
        if (local_78[0] != '\x01') {
          local_238 = FUN_180112a50(local_78);
          uVar16 = FUN_1800f6bd0(local_200,"cannot use value() with ",&local_238);
          FUN_1800f6ca0(local_c8,0x132,uVar16);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_c8,&DAT_1808d1050);
        }
        local_68 = ZEXT816(0);
        auStack_58 = ZEXT816(0);
        FUN_1800e6b50(local_78,local_68,"proof");
        uVar16 = FUN_1800f3e20(local_78,local_200);
        cVar10 = FUN_1800e6ca0(local_68,uVar16);
        if (cVar10 == '\0') {
          uVar16 = FUN_1800f34a0(local_68);
          FUN_1800e69c0(uVar16,&local_48);
        }
        else {
          local_48 = (undefined8 *******)local_258._0_8_;
          uStack_40 = local_258._8_8_;
          sStack_38 = sStack_248;
          uStack_30 = uStack_240;
          sStack_248 = 0;
          uStack_240 = 0xf;
          auVar3[0xf] = 0;
          auVar3._0_15_ = local_258._1_15_;
          local_258 = auVar3 << 8;
        }
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        FUN_18015c010(local_258);
        local_258._8_8_ = 0xc;
        local_258._0_8_ = "launch-proof";
        cVar10 = FUN_180010790(local_258,&local_48);
        if (cVar10 != '\0') {
          FUN_1800018b0(local_200);
          local_238._0_4_ = 0x11;
          local_68 = (undefined1  [16])0x0;
          auStack_58 = (undefined1  [16])0x0;
          lVar19 = -1;
          do {
            lVar18 = lVar19 + 1;
            lVar9 = lVar19 + 1;
            lVar19 = lVar18;
          } while (local_230[lVar9] != '\0');
          FUN_18015ba30(local_68,local_230,lVar18);
          local_238._0_4_ = 0x13;
          plVar17 = (longlong *)FUN_18015b2a0(local_68,&DAT_1807013fc,1);
          local_1c8 = (undefined1 *)*plVar17;
          puStack_1c0 = (undefined1 *)plVar17[1];
          lStack_1b8 = plVar17[2];
          lStack_1b0 = plVar17[3];
          *(undefined1 *)plVar17 = 0;
          plVar17[2] = 0;
          plVar17[3] = 0xf;
          local_238 = CONCAT44(local_238._4_4_,0x37);
          FUN_18015a6e0(local_258);
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          _Buf2 = local_258;
          if (0xf < uStack_240) {
            _Buf2 = (undefined1 *)local_258._0_8_;
          }
          _Buf1 = &local_48;
          if (0xf < uStack_30) {
            _Buf1 = local_48;
          }
          if ((sStack_38 == sStack_248) &&
             (((sStack_38 == 0 || (iVar14 = memcmp(_Buf1,_Buf2,sStack_38), iVar14 == 0)) &&
              (DVar11 = WaitForSingleObject(hHandle,0), DVar11 == 0x102)))) {
            bVar8 = false;
            goto LAB_180170515;
          }
        }
        bVar8 = true;
LAB_180170515:
        if (bVar4) {
          FUN_18015c010(local_258);
        }
        if (bVar5) {
          FUN_18015c010(&local_1c8);
        }
        if (bVar6) {
          FUN_18015c010(local_68);
        }
        if (bVar7) {
          FUN_18015c010(local_200);
        }
        if (bVar8) {
          FUN_18015c010(&local_48);
          FUN_1801409d0(local_70,local_78[0]);
          CloseHandle(hHandle);
        }
        local_208 = (HANDLE)0x0;
        FUN_18015c010(&local_48);
        FUN_1801409d0(local_70,local_78[0]);
      }
      goto LAB_1801705e2;
    }
  }
  if (0xfffffffffffffffd < (longlong)hHandle - 1U) {
  }
LAB_1801705e2:
  CloseHandle(hHandle);
}



