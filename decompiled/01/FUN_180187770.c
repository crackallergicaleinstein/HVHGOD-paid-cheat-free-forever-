// FUN_180187770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187770 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180187770(undefined1 (*param_1) [16],undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  DWORD DVar11;
  NTSTATUS NVar12;
  LPCWSTR lpFileName;
  undefined8 *puVar13;
  BCRYPT_HASH_HANDLE pvVar14;
  ulonglong uVar15;
  byte *pbVar16;
  undefined1 auStack_101c8 [16];
  ulonglong uStack_101b8;
  undefined8 uStack_101b0;
  undefined4 uStack_101a8;
  undefined8 uStack_101a0;
  longlong alStack_10198 [2];
  byte abStack_10188 [160];
  undefined **appuStack_100e8 [12];
  undefined1 auStack_10088 [8];
  BCRYPT_HASH_HANDLE pvStack_10080;
  undefined1 auStack_10078 [16];
  ulonglong uStack_10068;
  undefined8 uStack_10060;
  undefined8 uStack_10058;
  undefined8 uStack_10050;
  undefined8 uStack_10048;
  undefined8 uStack_10040;
  byte abStack_10038 [65552];
  
  uStack_101a8 = 0;
  uStack_101a0 = param_3;
  lpFileName = (LPCWSTR)FUN_180186ef0(auStack_10078);
  if (7 < *(ulonglong *)(lpFileName + 0xc)) {
    lpFileName = *(LPCWSTR *)lpFileName;
  }
  DVar11 = GetFileAttributesW(lpFileName);
  FUN_18015b930(auStack_10078);
  if ((DVar11 == 0xffffffff) || ((DVar11 & 0x410) != 0)) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    FUN_18063ab10(alStack_10198,0,0x110);
    FUN_18015e690(alStack_10198,param_2,0x20);
    _auStack_10088 = (undefined1  [16])0x0;
    NVar12 = BCryptOpenAlgorithmProvider
                       ((BCRYPT_ALG_HANDLE *)auStack_10088,L"SHA256",(LPCWSTR)0x0,0);
    if (-1 < NVar12) {
      NVar12 = BCryptCreateHash((BCRYPT_ALG_HANDLE)auStack_10088,&pvStack_10080,(PUCHAR)0x0,0,
                                (PUCHAR)0x0,0,0);
      pvVar14 = pvStack_10080;
      if (NVar12 < 0) {
        pvVar14 = (BCRYPT_HASH_HANDLE)0x0;
      }
      pvStack_10080 = pvVar14;
    }
    FUN_18063ab10(abStack_10038,0,0x10000);
    uVar15 = 0;
    bVar1 = abStack_10188[*(int *)(alStack_10198[0] + 4)];
    while (((bVar1 & 6) == 0 && ((*param_3 == 0 || ((*(uint *)(*param_3 + 4) & 1) == 0))))) {
      FUN_1801771e0(alStack_10198,abStack_10038,0x10000);
      uVar15 = uVar15 + alStack_10198[1];
      if (0x10000000 < uVar15) {
LAB_180187a50:
        pvVar14 = pvStack_10080;
LAB_180187a57:
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0xf;
        (*param_1)[0] = 0;
        if (pvVar14 != (BCRYPT_HASH_HANDLE)0x0) {
          BCryptDestroyHash(pvVar14);
        }
        if (auStack_10088 != (undefined1  [8])0x0) {
          BCryptCloseAlgorithmProvider((BCRYPT_ALG_HANDLE)auStack_10088,0);
        }
        *(undefined ***)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4) + -4) =
             *(int *)(alStack_10198[0] + 4) + -0xb0;
        FUN_1800f63e0(abStack_10188);
        *(undefined ***)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4) + -4) =
             *(int *)(alStack_10198[0] + 4) + -0x18;
        appuStack_100e8[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)appuStack_100e8);
        goto LAB_180187c4d;
      }
      pvVar14 = (BCRYPT_HASH_HANDLE)0x0;
      if (pvStack_10080 == (BCRYPT_HASH_HANDLE)0x0) goto LAB_180187a57;
      NVar12 = BCryptHashData(pvStack_10080,abStack_10038,(ULONG)alStack_10198[1],0);
      if (NVar12 < 0) goto LAB_180187a50;
      bVar1 = abStack_10188[*(int *)(alStack_10198[0] + 4)];
    }
    if (((abStack_10188[*(int *)(alStack_10198[0] + 4)] & 1) == 0) ||
       ((*param_3 != 0 && ((*(uint *)(*param_3 + 4) & 1) != 0)))) {
      uStack_10068 = 0;
      uStack_10060 = 0xf;
      auStack_10078._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar8[0xf] = 0;
      auVar8._0_15_ = auStack_10078._1_15_;
      auStack_10078 = auVar8 << 8;
      puVar13 = (undefined8 *)auStack_10078;
      bVar10 = false;
      bVar9 = true;
    }
    else {
      uStack_10058 = 0;
      uStack_10050 = 0;
      uStack_10048 = 0;
      uStack_10040 = 0;
      if ((pvStack_10080 == (BCRYPT_HASH_HANDLE)0x0) ||
         (NVar12 = BCryptFinishHash(pvStack_10080,(PUCHAR)&uStack_10058,0x20,0), NVar12 < 0)) {
        uStack_101b8 = 0;
        uStack_101b0 = 0xf;
        auStack_101c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar7[0xf] = 0;
        auVar7._0_15_ = auStack_101c8._1_15_;
        auStack_101c8 = auVar7 << 8;
        puVar13 = (undefined8 *)auStack_101c8;
        bVar10 = true;
        bVar9 = false;
      }
      else {
        auStack_101c8._0_8_ = 0x3736353433323130;
        auStack_101c8._8_8_ = 0x6665646362613938;
        uStack_101b8 = uStack_101b8 & 0xffffffffffffff00;
        uStack_10068 = 0;
        uStack_10060 = 0xf;
        auStack_10078._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar5[0xf] = 0;
        auVar5._0_15_ = auStack_10078._1_15_;
        auStack_10078 = auVar5 << 8;
        pbVar16 = (byte *)&uStack_10058;
        do {
          bVar1 = *pbVar16;
          FUN_18015af80(auStack_10078,auStack_101c8[bVar1 >> 4]);
          FUN_18015af80(auStack_10078,auStack_101c8[bVar1 & 0xf]);
          pbVar16 = pbVar16 + 1;
        } while (pbVar16 != abStack_10038);
        auStack_101c8 = auStack_10078;
        uStack_101b8 = uStack_10068;
        uStack_101b0 = uStack_10060;
        uStack_10068 = 0;
        uStack_10060 = 0xf;
        auVar6[0xf] = 0;
        auVar6._0_15_ = auStack_10078._1_15_;
        auStack_10078 = auVar6 << 8;
        FUN_18015c010(auStack_10078);
        puVar13 = (undefined8 *)auStack_101c8;
        bVar10 = true;
        bVar9 = false;
      }
    }
    uVar2 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    *(undefined8 *)*param_1 = *puVar13;
    *(undefined8 *)(*param_1 + 8) = uVar2;
    *(undefined8 *)param_1[1] = uVar3;
    *(undefined8 *)(param_1[1] + 8) = uVar4;
    *(undefined1 *)puVar13 = 0;
    puVar13[2] = 0;
    puVar13[3] = 0xf;
    if (bVar9) {
      FUN_18015c010(auStack_10078);
    }
    if (bVar10) {
      FUN_18015c010(auStack_101c8);
    }
    if (pvStack_10080 != (BCRYPT_HASH_HANDLE)0x0) {
      BCryptDestroyHash(pvStack_10080);
    }
    if (auStack_10088 != (undefined1  [8])0x0) {
      BCryptCloseAlgorithmProvider((BCRYPT_ALG_HANDLE)auStack_10088,0);
    }
    *(undefined ***)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4) + -4) =
         *(int *)(alStack_10198[0] + 4) + -0xb0;
    FUN_1800f63e0(abStack_10188);
    *(undefined ***)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4)) =
         std::basic_istream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)alStack_10198 + (longlong)*(int *)(alStack_10198[0] + 4) + -4) =
         *(int *)(alStack_10198[0] + 4) + -0x18;
    appuStack_100e8[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_100e8);
  }
LAB_180187c4d:
  FUN_18017cdd0(param_3);
}



